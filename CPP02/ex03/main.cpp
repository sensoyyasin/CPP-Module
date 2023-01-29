#include "Point.hpp"

int main()
{
    Point const a(1,1);
    Point const b(2,5);
    Point const c(5,4);

    Point const p(2,3);

    bool is = bsp(a, b, c, p);

    if (is == true)
        std::cout << "\033[1;92mThe point is Inside the triangle..\033[0m" << std::endl;
    else
        std::cout << "\033[1;91mThe point is Outside the triangle..\033[0m" << std::endl;
    return (0);
}