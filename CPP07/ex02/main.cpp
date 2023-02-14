#include <iostream>

//Array sınıfı typename T veri türü icin bir dizi depolar.
template <typename T, size_t size>
class Array
{
public:
    T arr[size];
    T &operator[](size_t index)
    {
        return (arr[index]);
    }

    size_t length()
    {
        return(size);
    }
};


int main()
{
    Array<int, 5> myArray;

    for (size_t i = 1; i <= myArray.length(); i++)
        myArray[i] = i;
    for (size_t i = 1; i <= myArray.length(); i++)
        std::cout << myArray[i] << std::endl;
    return (0);
}