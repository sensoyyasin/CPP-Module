#include <iostream>
#include <vector>


//back -> returns the reference to the last element
//front -> returns the reference to the first element

//vector::iterator vector::begin() vector first adress
//vector::iterator vector::end() vector last adress
//vector::clear() -> clear to vector
//bool vector::empty()

//void vector::pop_back() -> removes the last element in the vector
//void vector::push_back(value) -> adds a new element at the end of the vector
int main()
{
    std::vector<int> v;
    std::vector<int> v1(2,10);
    std::vector<int> v2(10);
    std::vector<int> v4(&v2[5],&v2[8]);
    std::vector<int> v5(v2);



    return (0);
}