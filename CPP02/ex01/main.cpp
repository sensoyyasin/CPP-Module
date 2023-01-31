#include "Fixed.hpp"


int main( void ) 
{
    Fixed a;
    Fixed const b( 10 ); //Copy constructor yeni olusurken
    Fixed const c( 42.42f ); //Copy Constructor
    Fixed const d( b ); //Copy constructor

    a = Fixed( 1234.4321f ); //Calls the assignment operator.

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    return 0; 
}