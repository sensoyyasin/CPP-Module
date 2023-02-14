#include <iostream>

template <typename T>
void iter(T *array, int length, void(*func)(T &))
{
    int i = 0;
    while (i < length)
    {
        func(array[i]);
        i++;
    }
}

template <typename T>
void printer(T &str)
{
    std::cout << str << std::endl;
}

int main()
{
    int foo[4] = {16, 2, 77, 40};
    iter(foo, 4, printer);

    std::string foo2[4] = {"my","brain","fucked","up"};
    iter(foo2, 4, printer);
}