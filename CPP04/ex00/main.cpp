#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *dog = new Dog();
    Animal *cat = new Cat();
    Animal *animal = new Animal();

    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;

    dog->makeSound();
    cat->makeSound();
    animal->makeSound();

    delete dog;
    delete cat;
    delete animal;

    return (0);
}