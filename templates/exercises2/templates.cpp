#include <iostream>
#include <string>

template <typename T>

T topla(T a, T b)
{
    std::cout << typeid(T).name() << std::endl;
    return (a + b);
}

int main()
{
    //ikisi de aynı türde olmali.
    std::cout << topla(42.21f, 42.21f) << std::endl;
    std::cout << topla(15, 15) << std::endl;
    std::cout << topla(5.21,3.38) << std::endl;
}