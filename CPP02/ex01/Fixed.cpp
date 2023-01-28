#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
    std::cout << "Int constructor called" << std::endl;
    this->depo = i;
}

Fixed::Fixed(const float j)
{
    std::cout << "Float constructor called" << std::endl;
    this->depo = j * 1.000001;
    //this->depo = (j + (j * 1.000001));
    this->depo = j;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed	&Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->depo = src.getRawBits();
	return (*this);
}

float Fixed::getRawBits() const
{
    return(this->depo);
}

void Fixed::setRawBits(int const raw)
{
    this->depo = raw;
}

int Fixed::toInt(void) const
{
    return(roundf(this->depo));
    //return(round(this->depo >> Fixed::integer));
}

float Fixed::toFloat(void) const
{
    return(this->depo);
}

std::ostream& operator<<(std::ostream &o, const Fixed &f)
{
    return(o << f.toFloat());
}
