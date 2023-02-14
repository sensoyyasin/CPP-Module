#include <stdio.h>
#include <iostream>

int max_int( int x, int y) {return ( x >= y ? x : y); }
float max_float( float x, float y) {return ( x >= y ? x : y); }
char max_char( char x, char y) {return ( x >= y ? x : y); }

int main()
{
    int a = 21;
    int b = 42;

    std::cout << max_int(a,b) << std::endl;
}