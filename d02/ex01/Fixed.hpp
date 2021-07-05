#ifndef __FIXED_HPP__
# define __FIXED_HPP__
#include <iostream>

class Fixed
{
    private :
        int val;
        static const int n_fractional_bits = 8;

    public :
        Fixed(void);
        Fixed(Fixed &n);
        ~Fixed(void);

        int getRawBits(void) const;
        void setRawBits(int const raw);

        void operator = (const Fixed &n);
};

#endif
