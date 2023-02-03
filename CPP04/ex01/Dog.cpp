#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->setType("Dog");
    std::cout << "Dog constructor called" << std::endl;
    this->brain = new Brain();
};

Dog::~Dog()
{
    std::cout << "The dog is destroyed." << std::endl;
    delete this->brain;
};

void Dog::makeSound()
{
    std::cout << "The dog barks." << std::endl;
}
