#include "Fixed.hpp"

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        this->depola = src.getRawBits();
    return(*this);
}

Fixed::Fixed()
{
    std::cout << "Default Constructor called" << std::endl;
    this->depola = 0;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = copy;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->depola);
}

void Fixed::setRawBits(int const raw)
{
    this->depola = raw;
}