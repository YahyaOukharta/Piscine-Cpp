#ifndef __FIXED_HPP__
# define __FIXED_HPP__
#include <iostream>
#include <cmath>

class Fixed
{
    private :
        int val;
        static const int n_fractional_bits = 8;

    public :
        Fixed(void);
        Fixed(Fixed const &n) ;

        Fixed(const int     n);
        Fixed(const float   n);

        ~Fixed(void);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);

        float   toFloat(void) const;
        int     toInt(void) const;

        void    operator =  (const Fixed &n);
        static Fixed &min(Fixed &f1, Fixed &f2);
        static Fixed &max(Fixed &f1, Fixed &f2);
        static Fixed const &min(Fixed const &f1, Fixed const &f2);
        static Fixed const &max(Fixed const &f1, Fixed const &f2);


};
//output stream operator
std::ostream    &operator<<(std::ostream &os, const Fixed &n);

//comparioson operators
bool    operator < (const Fixed &f1, const Fixed &f2);
bool    operator > (const Fixed &f1, const Fixed &f2);
bool    operator <= (const Fixed &f1, const Fixed &f2);
bool    operator >= (const Fixed &f1, const Fixed &f2);
bool    operator == (const Fixed &f1, const Fixed &f2);
bool    operator != (const Fixed &f1, const Fixed &f2);

// Arithmetic operators
Fixed    operator + (const Fixed &f1, const Fixed &f2);
Fixed    operator - (const Fixed &f1, const Fixed &f2);
Fixed    operator * (const Fixed &f1, const Fixed &f2);
Fixed    operator / (const Fixed &f1, const Fixed &f2);
#endif
