#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->setType("Cat");
    std::cout << "Cat constructor called" << std::endl;
    this->brain = new Brain();
};

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
};

void Cat::makeSound()
{
    std::cout << "Miyav miyav." << std::endl;
}