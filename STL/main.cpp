#include <algorithm>
#include <iostream>
#include <vector>

template <typename T, typename U>
void easyFinder(T &v, U y);

int main()
{
    std::vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    easyFinder(v, 50);

    return (0);
}

template <typename T, typename U>
void easyFinder(T &v, U y)
{
    std::vector<int>::iterator it;

    it = std::find(v.begin(), v.end(), y);
    if (it != v.end())
        std::cout << "Element found in myVector: " << *it << std::endl;
    else
        std::cerr << "Element didn't find" << std::endl;
}