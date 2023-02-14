#include <iostream>

template <typename T>

T arttir(T x)
{
    return (x + 1);
}

template <typename T>
void yerDegistir(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

template <class T>
class myClass
{
    public:
        T data;
        myClass(T data)
        {
            this->data = data;
        };
};

int main()
{
    myClass<int> b(42);
    std::cout << b.data << std::endl;

    myClass<std::string> c("Xavi");
    std::cout << c.data << std::endl;
    // int a = 5;
    // int b = 3;
    // std::cout << a << "\t" << b << std::endl;
    // yerDegistir(a,b);
    // std::cout << a << "\t" << b << std::endl;

    // char c1 = 'a';
    // char c2 = 'b';
    // std::cout << "\n" << c1 << "\t" << c2 << std::endl;
    // yerDegistir(c1, c2);
    // std::cout << c1 << "\t" << c2 << std::endl;
}