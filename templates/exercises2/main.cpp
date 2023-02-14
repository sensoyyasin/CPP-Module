#include <iostream>

template < typename T >
T max(T const &x, T const &y)
{
    return (x > y ? x : y);
}

int main( void )
{
    int a = 21;
    int b = 42;

    std::cout << "Max of " << a << " and " << b << " is ";
    std::cout << max<int>( a, b ) << std::endl; //explicit
    std::cout << "Max of " << a << " and " << b << " is ";
    std::cout << max( a, b ) << std::endl; //implicit

    float c = -1.7f;
    float d = 4.2f;
    std::cout << "Max of " << c << " and " << d << " is ";
    std::cout << max<float>( c, d ) << std::endl; //explicit
    std::cout << "Max of " << c << " and " << d << " is ";
    std::cout << max( c, d ) << std::endl; //implicit
}
