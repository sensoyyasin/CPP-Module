#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *dog = new Dog();
    Animal *cat = new Cat();
    //Animal *animal = new Animal();
    //I can't create direct object from abstract class
    //Because abstract classes contain undefined functions 
    //and these functions must be implemented in derived classes.
    //Therefore, you can create objects from classes that derive from abstract classes.
    //Animal *animal = new Animal();

    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;

    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;

    return (0);
}