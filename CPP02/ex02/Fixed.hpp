#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

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

        Fixed operator*(Fixed const &src);
        Fixed operator/(Fixed const &src);

		bool operator<(Fixed const &src);
		bool operator>(Fixed const &src);
		bool operator<=(Fixed const &src);
		bool operator>=(Fixed const &src);
		bool operator==(Fixed const &src);
		bool operator!=(Fixed const &src);

        static Fixed max(Fixed src1, Fixed src2);
        static Fixed min(Fixed src1, Fixed src2);

        float toFloat(void) const;
        int toInt(void) const;

        //Getter
        float getRawBits(void) const;

        //Setter
        void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream &o, const Fixed &src);

#endif
