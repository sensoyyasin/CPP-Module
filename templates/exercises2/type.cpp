#include <iostream>
#include <iomanip>

template <typename T>
class Vertex
{
private:
    T const x;
    T const y;
    T const z;

    Vertex(void);

public:
    Vertex(T const &x, T const &y, T const &z) : x(x), y(y), z(z){};

    T const &   getX(void) const {return this->x;}
    T const &   getY(void) const {return this->y;}
    T const &   getZ(void) const {return this->z;}

};

template <typename T>
std::ostream & operator<<(std::ostream &o, Vertex<T> const &a)
{
    o << a.getX() << "," << a.getY() << ","<< a.getZ();
    //std::cout << a << std::endl;
    return(o);
}

int main()
{
    Vertex<int> v1(12,23,34);

    std::cout << v1 << std::endl;

    return(0);
}