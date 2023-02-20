#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Easyfind
{
public:
    template <typename T>
    T easyFinder(T &x, T y)
    {
        std::vector<int>::iterator it;

        it = std::find(x.begin(), x.end(), y);
        if (it != x.end())
            std::cout << "Element found in myVector: " << *it << std::endl;
        else
        {
            std::cerr << "Element didn't find" << std::endl;
            return (-1);
        }
    }
};

#endif