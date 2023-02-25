#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private:
        int depola;
        static const int kesirli = 8;

    public:
        //Constructors
        Fixed();
        Fixed(const Fixed& copy);

        //Destructor
        ~Fixed();

        //Overloaded Operators
        Fixed &operator = (const Fixed &src);

        //Getter
        int getRawBits(void) const;

        //Setter
        void setRawBits(int const raw);
};

#endif