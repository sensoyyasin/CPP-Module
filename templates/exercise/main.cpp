#include <iostream>

class Deneme
{
private:
    std::string name;
    int age;
public:
    int maas;

    void setName(std::string gelen)
    {
        name = gelen;
    }
    std::string getName()
    {
        return (name);
    }
};


int main()
{
    Deneme deneme;

    deneme.setName("Yasin");
    std::cout << deneme.getName() << std::endl;
}