#include "Fixed.hpp"

Fixed::Fixed()
{
	this->depo = 0;
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

Fixed::Fixed(const Fixed &src)
{
	//Bir constructor veya destructor deger donduremez.
	this->depo = src.getRawBits();
}

Fixed  &Fixed::operator=(const Fixed &src)
{
	this->depo = src.getRawBits();
	return(*this);
}

bool Fixed::operator<(const Fixed &src)
{
	return(this->toFloat() < src.toFloat());
}

bool Fixed::operator<=(const Fixed &src)
{
	return(this->toFloat() <= src.toFloat());
}

bool Fixed::operator>(const Fixed &src)
{
	return(this->toFloat() > src.toFloat());
}

bool Fixed::operator>=(const Fixed &src)
{
	return(this->toFloat() >= src.toFloat());
}

bool Fixed::operator==(const Fixed &src)
{
	return(this->toFloat() == src.toFloat());
}

bool Fixed::operator!=(const Fixed &src)
{
	return(this->toFloat() != src.toFloat());
}

Fixed Fixed::operator*(const Fixed &src)
{
	return (this->toFloat() * src.toFloat());
}

Fixed Fixed::operator/(const Fixed &src)
{
	return (this->toFloat() / src.toFloat());
}

//a++;
Fixed Fixed::operator++(int)
{
	Fixed a;
	a = this->toFloat();
	this->depo++;
	return (a);
}

//a--;
Fixed Fixed::operator--(int)
{
	Fixed a;
	a = this->toFloat();
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

Fixed Fixed::max(Fixed src1, Fixed src2)
{
	if (src1 > src2)
		return(src1);
	else
		return(src2);
}

Fixed Fixed::min(Fixed src1, Fixed src2)
{
	if (src1 < src2)
		return(src1);
	else
		return(src2);
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
