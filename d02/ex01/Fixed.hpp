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
};

std::ostream &operator<<(std::ostream &os, const Fixed &n);

#endif
