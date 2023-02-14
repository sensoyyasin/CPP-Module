#include <iostream>
#include <vector>

template <typename T>
class Dizi
{
public:
    Dizi()
    {
        toplamBoyut = 10;
        elemanlar = new T[toplamBoyut];
        es = 0;
    }
    void ekle(T yeni)
    {
        if (toplamBoyut >= es)
        {
            toplamBoyut *= 2;
            T *yeniyer = new T[toplamBoyut];

            for(int i=0; i < es; i++)
                yeniyer[i] = elemanlar[i];
            delete[] elemanlar;

            elemanlar = yeniyer;
        }

        elemanlar[es] = yeni;
        es++;
    }
    void cikar(int index);

    T getir(int index);
private:
    int es;
    int toplamBoyut;
    T *elemanlar;
};

template <typename T>
T Dizi<T>::getir(int index)
{
    if (index >= es)
    {
        std::cerr << "hata" << std::endl;
    }
    return elemanlar[index];
}

int main()
{
    Dizi<int> intDizi;

    intDizi.ekle(10);
    std::cout << intDizi.getir(0) << std::endl;

    Dizi<std::string> yaziDizisi;
    yaziDizisi.ekle("hello");
    yaziDizisi.ekle(" world");

    std::cout << yaziDizisi.getir(0) << " " << std::endl;
}