#include <iostream>

class Animal
{
private:
    std::string type;
public:
    virtual void makeSound()
    {
        std::cout << "Animal " <<  std::endl;
    }
};

class Dog : public Animal
{
    public:
    void makeSound()
    {
        std::cout << "Barkkk" <<  std::endl;
    }
};

class Cat : public Animal
{
    public:
    void makeSound()
    {
        std::cout << "Miyavv " <<  std::endl;
    }
};

int main()
{
    Animal *animal = new Animal();
    Animal *dog = new Dog();
    Animal *cat = new Cat();

    animal->makeSound();
    dog->makeSound();
    cat->makeSound();
    return (0);
}