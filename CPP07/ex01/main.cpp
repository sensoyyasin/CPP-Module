#include "iter.hpp"

int main()
{
    int foo[4] = {16, 2, 77, 40};
    iter(foo, 4, print_func);

    std::cout << "------------" << std::endl;
    
    std::string foo2[4] = {"my","brain","fucked","up"};
    iter(foo2, 4, print_func);
}