#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    int i = 0;
    Animal *animals[100];

    while (i < 100)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        i++;
    }

    i = 0;
    while (i < 100)
    {
        delete animals[i];
        i++;
    }
    //system("leaks Animal");
    return (0);
}