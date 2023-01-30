#include "Point.hpp"

int main()
{
    Point const a(0,10);
    Point const b(10,0);
    Point const c(0,0);

    Point const p(2,8);

    //the purpose of this algorithm is if a point is inside a triangle the areas are equal
    //Returns: True if the point is inside the triangle. False otherwise. Thus, if the point is a vertex or on edge, it will return False.
    bool is = bsp(a, b, c, p);

    if (is == true)
        std::cout << "\033[1;92mThe point is Inside the triangle..\033[0m" << std::endl;
    else
        std::cout << "\033[1;91mThe point is Outside or vertex or on edge the triangle..\033[0m" << std::endl;
    return (0);
}
