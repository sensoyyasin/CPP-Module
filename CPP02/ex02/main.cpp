#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	//Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	a = 10;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	//std::cout << a++ << std::endl;
	//std::cout << a << std::endl;
	//std::cout << a * 2 << std::endl;
	//std::cout << ++a << std::endl;
	//std::cout << a << std::endl;
	//std::cout << a << std::endl;
	//std::cout << b << std::endl;
	//std::cout << Fixed::max( a, b ) << std::endl;

	return (0);
}
