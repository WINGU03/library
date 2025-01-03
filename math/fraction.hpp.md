---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://opensource.org/licenses/mit-license.php)
  bundledCode: "#line 1 \"math/fraction.hpp\"\n// Copyright \xA9\uFE0F (c) NokonoKotlin\
    \ (okoteiyu) 2024.\n// Released under the MIT license(https://opensource.org/licenses/mit-license.php)\
    \ \nclass Fraction{\n    protected:\n    using Integer = __int128_t;\n    Integer\
    \ A,B;\n    Integer m_eps_sign = 0;\n    Integer gcd(Integer x, Integer y) { return\
    \ (y!=0) ? gcd(y, x % y) : x; }\n\n    void format(){\n        if(A == 0 && B\
    \ == 0){}\n        else if(A == 0)B = 1; \n        else if(B == 0){\n        \
    \    Integer sign_ = 1;\n            if(this->A < 0)sign_ = -1;\n            this->\
    \ A = sign_;\n        }else{ \n            Integer g = gcd(A,B);\n           \
    \ A/=g;B/=g;\n            if(B < 0){A*=-1;B*=-1;} \n        }\n    }\n\n    public:\n\
    \    inline static const Fraction inf(){return Fraction(1,0);}\n    inline static\
    \ const Fraction ninf(){return Fraction(-1,0);}\n    inline static const Fraction\
    \ amb(){return Fraction(0,0);}\n    inline static const Fraction zero(){return\
    \ Fraction(0,1);}\n\n    Fraction(){}\n    Fraction(Integer a):A(a),B(1),m_eps_sign(0){this->format();}\n\
    \    Fraction(Integer a , Integer b):A(a),B(b),m_eps_sign(0){this->format();}\n\
    \    Fraction(const Fraction& x):A(x.A),B(x.B),m_eps_sign(x.m_eps_sign){this->format();}\n\
    \    Fraction& operator =(const Fraction& x){\n        this->m_eps_sign = x.m_eps_sign;\n\
    \        this->A = x.A;\n        this->B = x.B;\n        this->format();\n   \
    \     return (*this);\n    } \n\n    Fraction abs() const& {return (*this)*this->sign();}\n\
    \    bool is_ambiguous() const& {return bool(this->A == 0 && this->B == 0);}\n\
    \    bool is_infinite() const& {return bool(this->B==0);}\n    Integer sign()\
    \ const& {\n        assert(!this->is_ambiguous());\n        if(this->A == 0)return\
    \ this->m_eps_sign;\n        if(this->A < 0)return -1;\n        return 1;\n  \
    \  }\n\n    template<typename real>constexpr real to_real() const& {return real(A)/real(B);}\n\
    \    pair<Integer,Integer> raw_pair() const& {return make_pair(A,B);}\n    template<typename\
    \ real>explicit operator real() const& {return real(A)/real(B);}\n    Fraction\
    \ inv() const& {\n        if(this->is_ambiguous())return amb();\n        if(this->A\
    \ == 0){\n            if(this->sign() == 0)return amb();\n            return Fraction(this->sign(),0);\n\
    \        }\n        if(this->B == 0){\n            Fraction res(0,1);\n      \
    \      res.m_eps_sign = this->sign();\n            return res;\n        }\n  \
    \      return Fraction(this->B,this->A);\n    }\n\n    \n    Fraction& operator\
    \ +=(Fraction x){\n        if(this->is_ambiguous() || x.is_ambiguous()) [[unlikely]]\
    \ (*this) = amb();\n        else if(this->is_infinite() && x.is_infinite()) [[unlikely]]\
    \ {\n            if(this->sign() != x.sign())(*this) = amb();\n            else\
    \ if(this->sign() == -1)(*this) = ninf();\n            else (*this) = inf();\n\
    \        }else if(this->is_infinite()) [[unlikely]] {\n        }else if(x.is_infinite())\
    \ [[unlikely]] (*this) = x;\n        else if(this->A == 0 && x.A == 0) [[unlikely]]\
    \ {\n            if(this->sign() == x.sign()){}\n            else if(this->sign()\
    \ == 0)(*this) = x;\n            else if(x.sign() == 0){}\n            else (*this)\
    \ = amb();\n        }else [[likely]]{\n            (*this) = Fraction(this->A*x.B\
    \ + this->B*x.A , this->B*x.B);\n        }\n        return (*this);\n    }\n \
    \   Fraction& operator *=(Fraction x){\n        if(this->is_ambiguous() || x.is_ambiguous())\
    \ [[unlikely]] (*this) = amb();\n        else if(this->is_infinite() || x.is_infinite())\
    \ [[unlikely]] {\n            if(this->A != 0 && x.A != 0){\n                if(this->sign()\
    \ == x.sign())(*this) = inf();\n                else (*this) = ninf();\n     \
    \       }else{\n                if(this->sign() == 0 || x.sign() == 0)(*this)\
    \ = 0;\n                else (*this) = amb();\n            }\n        }else if(this->A\
    \ == 0 || x.A == 0) [[unlikely]] {\n            if(this->sign() == 0 || x.sign()\
    \ == 0)(*this) = 0;\n            else {\n                Fraction new_eps = 0;\n\
    \                new_eps.m_eps_sign = this->sign()*x.sign();\n               \
    \ (*this) = new_eps;\n            }\n        }else [[likely]] {(*this) = Fraction(\
    \ this->A*x.A, this->B*x.B );}\n        return (*this);\n    }\n    Fraction operator\
    \ -(){Fraction res(*this);return res*Fraction(-1);}\n    Fraction& operator -=(Fraction\
    \ x){return ((*this) += (-x));}\n    Fraction& operator /=(Fraction x){return\
    \ ((*this) *= x.inv());}\n    Fraction& operator %=(Fraction x){\n        assert(!this->is_ambiguous()\
    \ && !this->is_infinite() && !x.is_ambiguous() && !x.is_infinite());\n       \
    \ assert(x.A!= 0);\n        Fraction tmp = (*this);\n        tmp/=x;\n       \
    \ Integer m = tmp.raw_pair().first/tmp.raw_pair().second;\n        (*this) -=\
    \ m*x;\n        return (*this);\n    }\n\n    friend Fraction operator +(Fraction\
    \ a , Fraction b){return a+=b;}\n    friend Fraction operator -(Fraction a , Fraction\
    \ b){return a-=b;}\n    friend Fraction operator *(Fraction a , Fraction b){return\
    \ a*=b;}\n    friend Fraction operator /(Fraction a , Fraction b){return a/=b;}\n\
    \    friend Fraction operator %(Fraction a , Fraction b){return a%=b;}\n\n   \
    \ friend partial_ordering operator <=>(const Fraction& x , const Fraction& y){\n\
    \        if(x.is_ambiguous() || y.is_ambiguous()) [[unlikely]] return partial_ordering::unordered;\n\
    \        else if(x.sign() != y.sign()) [[unlikely]] return (x.sign() <=> y.sign());\n\
    \        else if(x.A == 0 || y.A == 0) [[unlikely]] {\n            if(x.sign()\
    \ == 0 && y.sign() == 0)return partial_ordering::equivalent;\n            if(x.A\
    \ == 0 && y.A == 0)return partial_ordering::equivalent; \n            else if(x.A\
    \ == 0){\n                if(y.sign() == -1)return partial_ordering::greater;\n\
    \                return partial_ordering::less;\n            }else{\n        \
    \        if(x.sign() == -1)return partial_ordering::less;\n                return\
    \ partial_ordering::greater;\n            }\n        }\n        else if(x.is_infinite()\
    \ && y.is_infinite()) [[unlikely]] return partial_ordering::equivalent;\n    \
    \    else if(x.is_infinite()) [[unlikely]] {\n            if(x.sign() == -1)return\
    \ partial_ordering::less;\n            return partial_ordering::greater;\n   \
    \     }else if(y.is_infinite()) [[unlikely]] {\n            if(y.sign() == -1)return\
    \ partial_ordering::greater;\n            return partial_ordering::less;\n   \
    \     }\n        else [[likely]] return ((x.A)*(y.B) <=> (y.A)*(x.B));\n    }\n\
    \n    friend bool operator ==(const Fraction& x,const Fraction& y){\n        if(x.is_ambiguous()\
    \ || x.is_infinite() || y.is_ambiguous() || y.is_infinite())return false;\n  \
    \      if(x.A == 0 && y.A == 0){\n            if(x.sign() == 0 && y.sign() ==\
    \ 0)return true;\n            return false;\n        }\n        return bool(x.A\
    \ == y.A && x.B == y.B);\n    }\n    friend bool operator !=(const Fraction& x,const\
    \ Fraction& y){return !(x==y);}\n\n    friend ostream& operator << (ostream& os,\
    \ const Fraction& x){\n        os.precision(40);\n        if(x.is_ambiguous())os\
    \ << \"?\";\n        else if(x.A == 0){\n            if(x.sign()<0)os << \"-\u03B5\
    \";\n            else if(x.sign()>0)os << \"\u03B5\";\n            else os <<\
    \ 0;\n        }else if(x.is_infinite()){\n            if(x.sign() < 0)os << \"\
    -\u221E\";\n            else os << \"\u221E\";\n        }else os << double(x.A)\
    \ << \"/\" << (long long)(x.B);\n        return os;\n    }  \n    friend istream&\
    \ operator >> (istream& is, Fraction& x){\n        long long tmp;\n        is\
    \ >> tmp;\n        x = Fraction(tmp);\n        return is;\n    }\n};\n"
  code: "// Copyright \xA9\uFE0F (c) NokonoKotlin (okoteiyu) 2024.\n// Released under\
    \ the MIT license(https://opensource.org/licenses/mit-license.php) \nclass Fraction{\n\
    \    protected:\n    using Integer = __int128_t;\n    Integer A,B;\n    Integer\
    \ m_eps_sign = 0;\n    Integer gcd(Integer x, Integer y) { return (y!=0) ? gcd(y,\
    \ x % y) : x; }\n\n    void format(){\n        if(A == 0 && B == 0){}\n      \
    \  else if(A == 0)B = 1; \n        else if(B == 0){\n            Integer sign_\
    \ = 1;\n            if(this->A < 0)sign_ = -1;\n            this-> A = sign_;\n\
    \        }else{ \n            Integer g = gcd(A,B);\n            A/=g;B/=g;\n\
    \            if(B < 0){A*=-1;B*=-1;} \n        }\n    }\n\n    public:\n    inline\
    \ static const Fraction inf(){return Fraction(1,0);}\n    inline static const\
    \ Fraction ninf(){return Fraction(-1,0);}\n    inline static const Fraction amb(){return\
    \ Fraction(0,0);}\n    inline static const Fraction zero(){return Fraction(0,1);}\n\
    \n    Fraction(){}\n    Fraction(Integer a):A(a),B(1),m_eps_sign(0){this->format();}\n\
    \    Fraction(Integer a , Integer b):A(a),B(b),m_eps_sign(0){this->format();}\n\
    \    Fraction(const Fraction& x):A(x.A),B(x.B),m_eps_sign(x.m_eps_sign){this->format();}\n\
    \    Fraction& operator =(const Fraction& x){\n        this->m_eps_sign = x.m_eps_sign;\n\
    \        this->A = x.A;\n        this->B = x.B;\n        this->format();\n   \
    \     return (*this);\n    } \n\n    Fraction abs() const& {return (*this)*this->sign();}\n\
    \    bool is_ambiguous() const& {return bool(this->A == 0 && this->B == 0);}\n\
    \    bool is_infinite() const& {return bool(this->B==0);}\n    Integer sign()\
    \ const& {\n        assert(!this->is_ambiguous());\n        if(this->A == 0)return\
    \ this->m_eps_sign;\n        if(this->A < 0)return -1;\n        return 1;\n  \
    \  }\n\n    template<typename real>constexpr real to_real() const& {return real(A)/real(B);}\n\
    \    pair<Integer,Integer> raw_pair() const& {return make_pair(A,B);}\n    template<typename\
    \ real>explicit operator real() const& {return real(A)/real(B);}\n    Fraction\
    \ inv() const& {\n        if(this->is_ambiguous())return amb();\n        if(this->A\
    \ == 0){\n            if(this->sign() == 0)return amb();\n            return Fraction(this->sign(),0);\n\
    \        }\n        if(this->B == 0){\n            Fraction res(0,1);\n      \
    \      res.m_eps_sign = this->sign();\n            return res;\n        }\n  \
    \      return Fraction(this->B,this->A);\n    }\n\n    \n    Fraction& operator\
    \ +=(Fraction x){\n        if(this->is_ambiguous() || x.is_ambiguous()) [[unlikely]]\
    \ (*this) = amb();\n        else if(this->is_infinite() && x.is_infinite()) [[unlikely]]\
    \ {\n            if(this->sign() != x.sign())(*this) = amb();\n            else\
    \ if(this->sign() == -1)(*this) = ninf();\n            else (*this) = inf();\n\
    \        }else if(this->is_infinite()) [[unlikely]] {\n        }else if(x.is_infinite())\
    \ [[unlikely]] (*this) = x;\n        else if(this->A == 0 && x.A == 0) [[unlikely]]\
    \ {\n            if(this->sign() == x.sign()){}\n            else if(this->sign()\
    \ == 0)(*this) = x;\n            else if(x.sign() == 0){}\n            else (*this)\
    \ = amb();\n        }else [[likely]]{\n            (*this) = Fraction(this->A*x.B\
    \ + this->B*x.A , this->B*x.B);\n        }\n        return (*this);\n    }\n \
    \   Fraction& operator *=(Fraction x){\n        if(this->is_ambiguous() || x.is_ambiguous())\
    \ [[unlikely]] (*this) = amb();\n        else if(this->is_infinite() || x.is_infinite())\
    \ [[unlikely]] {\n            if(this->A != 0 && x.A != 0){\n                if(this->sign()\
    \ == x.sign())(*this) = inf();\n                else (*this) = ninf();\n     \
    \       }else{\n                if(this->sign() == 0 || x.sign() == 0)(*this)\
    \ = 0;\n                else (*this) = amb();\n            }\n        }else if(this->A\
    \ == 0 || x.A == 0) [[unlikely]] {\n            if(this->sign() == 0 || x.sign()\
    \ == 0)(*this) = 0;\n            else {\n                Fraction new_eps = 0;\n\
    \                new_eps.m_eps_sign = this->sign()*x.sign();\n               \
    \ (*this) = new_eps;\n            }\n        }else [[likely]] {(*this) = Fraction(\
    \ this->A*x.A, this->B*x.B );}\n        return (*this);\n    }\n    Fraction operator\
    \ -(){Fraction res(*this);return res*Fraction(-1);}\n    Fraction& operator -=(Fraction\
    \ x){return ((*this) += (-x));}\n    Fraction& operator /=(Fraction x){return\
    \ ((*this) *= x.inv());}\n    Fraction& operator %=(Fraction x){\n        assert(!this->is_ambiguous()\
    \ && !this->is_infinite() && !x.is_ambiguous() && !x.is_infinite());\n       \
    \ assert(x.A!= 0);\n        Fraction tmp = (*this);\n        tmp/=x;\n       \
    \ Integer m = tmp.raw_pair().first/tmp.raw_pair().second;\n        (*this) -=\
    \ m*x;\n        return (*this);\n    }\n\n    friend Fraction operator +(Fraction\
    \ a , Fraction b){return a+=b;}\n    friend Fraction operator -(Fraction a , Fraction\
    \ b){return a-=b;}\n    friend Fraction operator *(Fraction a , Fraction b){return\
    \ a*=b;}\n    friend Fraction operator /(Fraction a , Fraction b){return a/=b;}\n\
    \    friend Fraction operator %(Fraction a , Fraction b){return a%=b;}\n\n   \
    \ friend partial_ordering operator <=>(const Fraction& x , const Fraction& y){\n\
    \        if(x.is_ambiguous() || y.is_ambiguous()) [[unlikely]] return partial_ordering::unordered;\n\
    \        else if(x.sign() != y.sign()) [[unlikely]] return (x.sign() <=> y.sign());\n\
    \        else if(x.A == 0 || y.A == 0) [[unlikely]] {\n            if(x.sign()\
    \ == 0 && y.sign() == 0)return partial_ordering::equivalent;\n            if(x.A\
    \ == 0 && y.A == 0)return partial_ordering::equivalent; \n            else if(x.A\
    \ == 0){\n                if(y.sign() == -1)return partial_ordering::greater;\n\
    \                return partial_ordering::less;\n            }else{\n        \
    \        if(x.sign() == -1)return partial_ordering::less;\n                return\
    \ partial_ordering::greater;\n            }\n        }\n        else if(x.is_infinite()\
    \ && y.is_infinite()) [[unlikely]] return partial_ordering::equivalent;\n    \
    \    else if(x.is_infinite()) [[unlikely]] {\n            if(x.sign() == -1)return\
    \ partial_ordering::less;\n            return partial_ordering::greater;\n   \
    \     }else if(y.is_infinite()) [[unlikely]] {\n            if(y.sign() == -1)return\
    \ partial_ordering::greater;\n            return partial_ordering::less;\n   \
    \     }\n        else [[likely]] return ((x.A)*(y.B) <=> (y.A)*(x.B));\n    }\n\
    \n    friend bool operator ==(const Fraction& x,const Fraction& y){\n        if(x.is_ambiguous()\
    \ || x.is_infinite() || y.is_ambiguous() || y.is_infinite())return false;\n  \
    \      if(x.A == 0 && y.A == 0){\n            if(x.sign() == 0 && y.sign() ==\
    \ 0)return true;\n            return false;\n        }\n        return bool(x.A\
    \ == y.A && x.B == y.B);\n    }\n    friend bool operator !=(const Fraction& x,const\
    \ Fraction& y){return !(x==y);}\n\n    friend ostream& operator << (ostream& os,\
    \ const Fraction& x){\n        os.precision(40);\n        if(x.is_ambiguous())os\
    \ << \"?\";\n        else if(x.A == 0){\n            if(x.sign()<0)os << \"-\u03B5\
    \";\n            else if(x.sign()>0)os << \"\u03B5\";\n            else os <<\
    \ 0;\n        }else if(x.is_infinite()){\n            if(x.sign() < 0)os << \"\
    -\u221E\";\n            else os << \"\u221E\";\n        }else os << double(x.A)\
    \ << \"/\" << (long long)(x.B);\n        return os;\n    }  \n    friend istream&\
    \ operator >> (istream& is, Fraction& x){\n        long long tmp;\n        is\
    \ >> tmp;\n        x = Fraction(tmp);\n        return is;\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: math/fraction.hpp
  requiredBy: []
  timestamp: '2025-01-03 15:41:03+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/fraction.hpp
layout: document
redirect_from:
- /library/math/fraction.hpp
- /library/math/fraction.hpp.html
title: math/fraction.hpp
---
