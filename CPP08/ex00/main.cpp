#include "easyfind.hpp"

int main()
{
    int arr[] = {10,20,30};
    std::vector<int> v(arr, arr + 5);

    std::cout << "1st elements of the array: "; easyFinder(v, 10);
    std::cout << "2nd elements of the array: "; easyFinder(v, 20);
    std::cout << "3rd elements of the array: "; easyFinder(v, 30);
    std::cout << "4th elements of the array: "; easyFinder(v, 40);

    // std::list<int> myList;
    
    // myList.push_back(10);
    // myList.push_back(20);
    // myList.push_back(30);
    // std::cout << "1st elements of the array: "; easyFinder(myList, 10);
    // std::cout << "2nd elements of the array: "; easyFinder(myList, 20);
    // std::cout << "3rd elements of the array: "; easyFinder(myList, 30);


    return (0);
}