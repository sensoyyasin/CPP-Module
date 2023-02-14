#include <iostream>

template < typename T >
class List
{
private:
    T *content;
    List<T> *next;
public:
    List<T>(T const & content)
    {

    }

    List <T>(List<T> const & list)
    {

    }
    ~List<T>(void)
    {

    }
};

int main(void)
{
    List<int> a(42);
    List<float> b(3.14f);
    List<List<int>> c(a);

    return(0);
}