#include "Fixed.hpp"

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
    //std::cout << "int before: " << i << std::endl;
    this->depo = (i << this->integer);
    //std::cout << "int after: " << this->depo << std::endl;
}

Fixed::Fixed(const float j)
{
    std::cout << "Float constructor called" << std::endl;
    //std::cout << "float before: " << j << std::endl;
    this->depo = roundf(j * (1 << integer));
    //std::cout << "float after: " << this->depo << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed	&Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
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
    return(this->depo >> integer);
}

float Fixed::toFloat(void) const
{
    //std::cout << "Son islem :"<< (float)this->depo / (1 << this->integer) << std::endl;
    return((float)this->depo / (1 << this->integer));
}

std::ostream& operator<<(std::ostream &o, const Fixed &f)
{
    return(o << f.toFloat());
}