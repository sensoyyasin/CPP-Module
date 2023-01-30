#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int depo;
        static const int integer = 8;

    public:

        //Constructor
        Fixed();
        Fixed(const int i);
        Fixed(const float j);
        //Destructor
        ~Fixed();

        //Copy constructor -> Fixed& referansı
        Fixed(const Fixed& src);
        Fixed &operator=(const Fixed &src);

		//a++;
		Fixed operator++(int);
		//++a;
		Fixed  &operator++();
		//--a;
		Fixed  &operator--();
		//a--;
		Fixed  operator--(int);
		//Fixed  &operator/();

		//bool Fixed	&operator>(const Fixed &src);
		//bool Fixed	&operator<(const Fixed &src);
		//bool Fixed	&operator>=(const Fixed &src);
		//bool Fixed	&operator<=(const Fixed &src);
		//bool Fixed	&operator==(const Fixed &src);
		//bool Fixed	&operator!=(const Fixed &src);

        float toFloat(void) const;
        int toInt(void) const;

        //Getter
        float getRawBits(void) const;

        //Setter
        void setRawBits(int const raw);

		//max

};

std::ostream& operator<<(std::ostream &o, const Fixed &src);

#endif
