//
// Created by lidan on 14/11/2020.
//

#ifndef EULEROPERATOR_VECTOR_DATA_H
#define EULEROPERATOR_VECTOR_DATA_H
#include <assert.h>
#include <stdarg.h>
#include <math.h>
#include <utility>

namespace Data{
    #define M_E        2.71828182845904523536
    #define M_LOG2E    1.44269504088896340736
    #define M_LOG10E   0.434294481903251827651
    #define M_LN2      0.693147180559945309417
    #define M_LN10     2.30258509299404568402
    #define M_PI       3.14159265358979323846
    #define M_PI_2     1.57079632679489661923
    #define M_PI_4     0.785398163397448309616
    #define M_1_PI     0.318309886183790671538
    #define M_2_PI     0.636619772367581343076
    #define M_2_SQRTPI 1.12837916709551257390
    #define M_SQRT2    1.41421356237309504880
    #define M_SQRT1_2  0.707106781186547524401

    template<typename type,int N>
    class Vector {
    private:
        type value[N] ;
        int Dim() { return N; }

    public:
        explicit  Vector(const type& s = 0)
        {
            for(unsigned int i = 0 ; i < N ; i++)
            {
                value[i] = 0 ;
            }
        }

        explicit  Vector(type s[])
        {
            for(unsigned int i = 0 ; i < N ; i++)
            {
                value[i] = s[i] ;
            }
        }

        Vector(const type v0, ...)
        {
            va_list ap ;
            va_start(ap,v0) ;

            value[0] = v0 ;
            for(int i = 1 ; i< N ; i++)
            {
                type t = va_arg(ap,type) ;
                value[i] = t ;
            }
        }

        type & operator[](const int &i)
        {
            assert((i>-1)&&(i<N)) ;
            return value[i] ;
        }

        type operator [](const int& i) const
        {
            assert((i>-1)&&(i<N)) ;
            return value[i] ;
        }

        bool operator==(const Vector<type,N> &v ) const
        {
            for(unsigned int i =0 ; i < N ; i++)
            {
                if(value[i] != v[i])
                {
                    return false ;
                }
            }
            return true ;
        }

        bool operator != (const Vector<type,N>& v) const{
            return !(*this == v) ;
        }

        bool operator != (const Vector<type,N>& v)
        {
            return !(*this == v) ;
        }

        bool operator < (const Vector<type,N>& v) const{
            unsigned int i ;
            for(i = 0 ; i < N ;i++)
            {
                if(value[i] != v[i])
                {
                    break ;
                }
            }

            if(i == N)
            {
                return false ;
            }

            if(value[i] < v[i])
            {
                return true ;
            }

            return false ;
        }

        Vector<type,N> operator* (const type& s)
        {
            Vector<type,N> v ;
            for(unsigned int i = 0 ; i< N ;i++)
            {
                v[i] = value[i] * s;
            }

            return v ;
        }


        Vector<type,N> operator/ (const type& s)
        {
            Vector<type,N> v ;
            for(unsigned int i = 0 ; i < N ;i++)
            {
                v[i] = value[i] / s;

            }
            return v ;
        }

        Vector<type,N> operator /= (const type& s)
        {
            for(unsigned int i = 0 ; i < N ;i++)
            {
                value[i] /= s;
            }
            return *this ;
        }


        Vector<type, N>  operator - (const Vector<type, N> & v)
        {
            Vector<type, N> vv;
            for (unsigned int i = 0; i < N; i ++)
            {
                vv[i] = value[i] - v[i];
            }

            return vv;
        }

        Vector<type, N>  operator + (const Vector<type, N> & v)
        {
            Vector<type, N> vv;
            for (unsigned int i = 0; i < N; i ++)
            {
                vv[i] = value[i] + v[i];
            }

            return vv;
        }


        Vector<type, N>  operator -= (const Vector<type, N> & v)
        {
            for (unsigned int i = 0; i < N; i ++)
            {
                value[i] -=  v[i];
            }

            return *this;
        }

        Vector<type, N>  operator += (const Vector<type, N> & v)
        {
            for (unsigned int i = 0; i < N; i ++)
            {
                value[i] +=  v[i];
            }

            return *this;
        }

        type * data()
        {
            return value;
        }

        type * data() const
        {
            return value;
        }

        Vector<type, N>  zero ()
        {
            for (unsigned int i = 0; i < N; i ++)
            {
                value[i] =  0;
            }

            return *this;
        }

        type operator| (Vector<type,N> & v)
        {
            type s ;
            s = 0 ;
            for(unsigned int i = 0 ; i< N ; i++)
            {
                s += value[i]* v[i] ;
            }

            return s ;
        }


        friend type dotProduct(Vector<type,N> & v0, Vector<type,N>& v1)
        {
            return v0|v1 ;
        }

        friend Vector<type,3> crossProduct(Vector<type,3> &v0, Vector<type,3>& v1)
        {
            return v0 % v1 ;
        }

        Vector<type,3> operator % (Vector<type,3> &v)
        {
            return VectorT<type, 3>(value[1] * v[2] - value[2] * v[1],
                                      value[2] * v[0] - value[0] * v[2],
                                      value[0] * v[1] - value[1] * v[0]);
        }

        type std_norm()
        {
            return sqrt((*this) | (*this)) ;
        }

        type squ_norm()
        {
            return ((*this)|(*this)) ;
        }

        Vector<type,N> normalize()
        {
            return (*this) /= norm() ;
        }

        Vector<type,N> maxnum(const Vector<type,3>& v )
        {
            for(unsigned int i = 0 ; i < N ; i++)
            {
                type t = std::max(value[i],v[i]) ;
                value[i] = t ;
            }
            return *this ;
        }
        Vector<type,N> minnum(const Vector<type,3>& v )
        {
            for(unsigned int i = 0 ; i < N ; i++)
            {
                type t = std::min(value[i],v[i]) ;
                value[i] = t ;
            }
            return *this ;
        }

    };

    typedef Vector<signed char,1> Vec1c;
    typedef Vector<unsigned char,1> Vec1uc;
    typedef Vector<signed short int,1> Vec1s;
    typedef Vector<unsigned short int,1> Vec1us;
    typedef Vector<signed int,1> Vec1i;
    typedef Vector<unsigned int,1> Vec1ui;
    typedef Vector<float,1> Vec1f;
    typedef Vector<double,1> Vec1d;

    typedef Vector<signed char,2> Vec2c;
    typedef Vector<unsigned char,2> Vec2uc;
    typedef Vector<signed short int,2> Vec2s;
    typedef Vector<unsigned short int,2> Vec2us;
    typedef Vector<signed int,2> Vec2i;
    typedef Vector<unsigned int,2> Vec2ui;
    typedef Vector<float,2> Vec2f;
    typedef Vector<double,2> Vec2d;

    typedef Vector<signed char,3> Vec3c;
    typedef Vector<unsigned char,3> Vec3uc;
    typedef Vector<signed short int,3> Vec3s;
    typedef Vector<unsigned short int,3> Vec3us;
    typedef Vector<signed int,3> Vec3i;
    typedef Vector<unsigned int,3> Vec3ui;
    typedef Vector<float,3> Vec3f;
    typedef Vector<double,3> Vec3d;

    typedef Vector<signed char,4> Vec4c;
    typedef Vector<unsigned char,4> Vec4uc;
    typedef Vector<signed short int,4> Vec4s;
    typedef Vector<unsigned short int,4> Vec4us;
    typedef Vector<signed int,4> Vec4i;
    typedef Vector<unsigned int,4> Vec4ui;
    typedef Vector<float,4> Vec4f;
    typedef Vector<double,4> Vec4d;

    typedef Vector<signed char,6> Vec6c;
    typedef Vector<unsigned char,6> Vec6uc;
    typedef Vector<signed short int,6> Vec6s;
    typedef Vector<unsigned short int,6> Vec6us;
    typedef Vector<signed int,6> Vec6i;
    typedef Vector<unsigned int,6> Vec6ui;
    typedef Vector<float,6> Vec6f;
    typedef Vector<double,6> Vec6d;

}

#endif //EULEROPERATOR_VECTOR_DATA_H
