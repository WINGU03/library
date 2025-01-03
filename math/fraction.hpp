// Copyright ©️ (c) NokonoKotlin (okoteiyu) 2024.
// Released under the MIT license(https://opensource.org/licenses/mit-license.php) 
class Fraction{
    protected:
    using Integer = __int128_t;
    Integer A,B;
    Integer m_eps_sign = 0;
    Integer gcd(Integer x, Integer y) { return (y!=0) ? gcd(y, x % y) : x; }

    void format(){
        if(A == 0 && B == 0){}
        else if(A == 0)B = 1; 
        else if(B == 0){
            Integer sign_ = 1;
            if(this->A < 0)sign_ = -1;
            this-> A = sign_;
        }else{ 
            Integer g = gcd(A,B);
            A/=g;B/=g;
            if(B < 0){A*=-1;B*=-1;} 
        }
    }

    public:
    inline static const Fraction inf(){return Fraction(1,0);}
    inline static const Fraction ninf(){return Fraction(-1,0);}
    inline static const Fraction amb(){return Fraction(0,0);}
    inline static const Fraction zero(){return Fraction(0,1);}

    Fraction(){}
    Fraction(Integer a):A(a),B(1),m_eps_sign(0){this->format();}
    Fraction(Integer a , Integer b):A(a),B(b),m_eps_sign(0){this->format();}
    Fraction(const Fraction& x):A(x.A),B(x.B),m_eps_sign(x.m_eps_sign){this->format();}
    Fraction& operator =(const Fraction& x){
        this->m_eps_sign = x.m_eps_sign;
        this->A = x.A;
        this->B = x.B;
        this->format();
        return (*this);
    } 

    Fraction abs() const& {return (*this)*this->sign();}
    bool is_ambiguous() const& {return bool(this->A == 0 && this->B == 0);}
    bool is_infinite() const& {return bool(this->B==0);}
    Integer sign() const& {
        assert(!this->is_ambiguous());
        if(this->A == 0)return this->m_eps_sign;
        if(this->A < 0)return -1;
        return 1;
    }

    template<typename real>constexpr real to_real() const& {return real(A)/real(B);}
    pair<Integer,Integer> raw_pair() const& {return make_pair(A,B);}
    template<typename real>explicit operator real() const& {return real(A)/real(B);}
    Fraction inv() const& {
        if(this->is_ambiguous())return amb();
        if(this->A == 0){
            if(this->sign() == 0)return amb();
            return Fraction(this->sign(),0);
        }
        if(this->B == 0){
            Fraction res(0,1);
            res.m_eps_sign = this->sign();
            return res;
        }
        return Fraction(this->B,this->A);
    }

    
    Fraction& operator +=(Fraction x){
        if(this->is_ambiguous() || x.is_ambiguous()) [[unlikely]] (*this) = amb();
        else if(this->is_infinite() && x.is_infinite()) [[unlikely]] {
            if(this->sign() != x.sign())(*this) = amb();
            else if(this->sign() == -1)(*this) = ninf();
            else (*this) = inf();
        }else if(this->is_infinite()) [[unlikely]] {
        }else if(x.is_infinite()) [[unlikely]] (*this) = x;
        else if(this->A == 0 && x.A == 0) [[unlikely]] {
            if(this->sign() == x.sign()){}
            else if(this->sign() == 0)(*this) = x;
            else if(x.sign() == 0){}
            else (*this) = amb();
        }else [[likely]]{
            (*this) = Fraction(this->A*x.B + this->B*x.A , this->B*x.B);
        }
        return (*this);
    }
    Fraction& operator *=(Fraction x){
        if(this->is_ambiguous() || x.is_ambiguous()) [[unlikely]] (*this) = amb();
        else if(this->is_infinite() || x.is_infinite()) [[unlikely]] {
            if(this->A != 0 && x.A != 0){
                if(this->sign() == x.sign())(*this) = inf();
                else (*this) = ninf();
            }else{
                if(this->sign() == 0 || x.sign() == 0)(*this) = 0;
                else (*this) = amb();
            }
        }else if(this->A == 0 || x.A == 0) [[unlikely]] {
            if(this->sign() == 0 || x.sign() == 0)(*this) = 0;
            else {
                Fraction new_eps = 0;
                new_eps.m_eps_sign = this->sign()*x.sign();
                (*this) = new_eps;
            }
        }else [[likely]] {(*this) = Fraction( this->A*x.A, this->B*x.B );}
        return (*this);
    }
    Fraction operator -(){Fraction res(*this);return res*Fraction(-1);}
    Fraction& operator -=(Fraction x){return ((*this) += (-x));}
    Fraction& operator /=(Fraction x){return ((*this) *= x.inv());}
    Fraction& operator %=(Fraction x){
        assert(!this->is_ambiguous() && !this->is_infinite() && !x.is_ambiguous() && !x.is_infinite());
        assert(x.A!= 0);
        Fraction tmp = (*this);
        tmp/=x;
        Integer m = tmp.raw_pair().first/tmp.raw_pair().second;
        (*this) -= m*x;
        return (*this);
    }

    friend Fraction operator +(Fraction a , Fraction b){return a+=b;}
    friend Fraction operator -(Fraction a , Fraction b){return a-=b;}
    friend Fraction operator *(Fraction a , Fraction b){return a*=b;}
    friend Fraction operator /(Fraction a , Fraction b){return a/=b;}
    friend Fraction operator %(Fraction a , Fraction b){return a%=b;}

    friend partial_ordering operator <=>(const Fraction& x , const Fraction& y){
        if(x.is_ambiguous() || y.is_ambiguous()) [[unlikely]] return partial_ordering::unordered;
        else if(x.sign() != y.sign()) [[unlikely]] return (x.sign() <=> y.sign());
        else if(x.A == 0 || y.A == 0) [[unlikely]] {
            if(x.sign() == 0 && y.sign() == 0)return partial_ordering::equivalent;
            if(x.A == 0 && y.A == 0)return partial_ordering::equivalent; 
            else if(x.A == 0){
                if(y.sign() == -1)return partial_ordering::greater;
                return partial_ordering::less;
            }else{
                if(x.sign() == -1)return partial_ordering::less;
                return partial_ordering::greater;
            }
        }
        else if(x.is_infinite() && y.is_infinite()) [[unlikely]] return partial_ordering::equivalent;
        else if(x.is_infinite()) [[unlikely]] {
            if(x.sign() == -1)return partial_ordering::less;
            return partial_ordering::greater;
        }else if(y.is_infinite()) [[unlikely]] {
            if(y.sign() == -1)return partial_ordering::greater;
            return partial_ordering::less;
        }
        else [[likely]] return ((x.A)*(y.B) <=> (y.A)*(x.B));
    }

    friend bool operator ==(const Fraction& x,const Fraction& y){
        if(x.is_ambiguous() || x.is_infinite() || y.is_ambiguous() || y.is_infinite())return false;
        if(x.A == 0 && y.A == 0){
            if(x.sign() == 0 && y.sign() == 0)return true;
            return false;
        }
        return bool(x.A == y.A && x.B == y.B);
    }
    friend bool operator !=(const Fraction& x,const Fraction& y){return !(x==y);}

    friend ostream& operator << (ostream& os, const Fraction& x){
        os.precision(40);
        if(x.is_ambiguous())os << "?";
        else if(x.A == 0){
            if(x.sign()<0)os << "-ε";
            else if(x.sign()>0)os << "ε";
            else os << 0;
        }else if(x.is_infinite()){
            if(x.sign() < 0)os << "-∞";
            else os << "∞";
        }else os << double(x.A) << "/" << (long long)(x.B);
        return os;
    }  
    friend istream& operator >> (istream& is, Fraction& x){
        long long tmp;
        is >> tmp;
        x = Fraction(tmp);
        return is;
    }
};