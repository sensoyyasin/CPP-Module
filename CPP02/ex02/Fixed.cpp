#include "Fixed.hpp"

Fixed::Fixed()
{
}

Fixed::~Fixed(){}

Fixed::Fixed(const int i)
{
    this->depo = (i << this->integer);
}

Fixed::Fixed(const float j)
{
    this->depo = roundf(j * (1 << integer));
}

Fixed::Fixed(const Fixed& src)
{
	//Bir constructor veya destructor deger donduremez.
	*this = src;
}

Fixed  &Fixed::operator=(const Fixed &src)
{
	if (this != &src)
		this->depo = src.getRawBits();
	return(*this);
}

//a++;
Fixed Fixed::operator++(int)
{
	Fixed a;
	a = this->toInt();
	this->depo++;
	return (a);
}

//a--;
Fixed Fixed::operator--(int)
{
	Fixed a;
	a = this->toInt();
	this->depo--;
	return (a);
}

//++a;
Fixed  &Fixed::operator++()
{
	this->depo++;
	return(*this);
}

//--a;
Fixed  &Fixed::operator--()
{
	this->depo--;
	return(*this);
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
