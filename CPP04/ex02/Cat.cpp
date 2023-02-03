#include "Cat.hpp"

Cat::Cat()
{
    this->setType("Cat");
    std::cout << "Cat constructor called" << std::endl;
};

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
};

void Cat::makeSound()
{
    std::cout << "Miyav miyav." << std::endl;
}