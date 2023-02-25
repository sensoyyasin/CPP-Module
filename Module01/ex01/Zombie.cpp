#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
    std::cout << "Constructor" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Destructor" << std::endl;
}