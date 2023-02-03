#include "Dog.hpp"

Dog::Dog()
{
    this->setType("Dog");
    std::cout << "Dog constructor called" << std::endl;
};

Dog::~Dog()
{
    std::cout << "The dog is destroyed." << std::endl;
};

void Dog::makeSound()
{
    std::cout << "The dog barks." << std::endl;
}
