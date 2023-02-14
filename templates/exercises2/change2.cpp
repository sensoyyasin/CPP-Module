#include <iostream>

template <class T>
class V
{
    T *data;
    int index;
    public:
        V() : index(0)
        {
            data = new T[100];
        }

    void ekle(T t)
    {
        data[index++] = t;
    }

    bool isEmpty() const
    {
        return(index == 0);
    }

    void print() const
    {
        for(int i = 0; i < index; i++)
            std::cout << data[i] <<  " ";
        if (!isEmpty())
            std::cout << std::endl;
    }

    // V<T> opreator+(const V<T>& v)
    // {
    //     V<T> temp;
    //     for(int i = 0; i < index; i++)
    //         temp.ekle(data[i] + v.data[i]);
    //     return (temp);
    // }
};

int main()
{
    V<int> v1;
    V<int> v2;

    v1.ekle(1);
    v1.ekle(3);
    v1.ekle(5);
    v1.print();

    v2.ekle(3);
    v2.ekle(2);
    v2.ekle(10);
    v2.print();

    return (0);
}