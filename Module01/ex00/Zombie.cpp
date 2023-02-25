#include "Zombie.hpp"

//Default constructor
Zombie::Zombie()
{
	this->Name = "Noname";
}

//Specified constructor
Zombie::Zombie(std::string name)
{
	this->Name = name;
	std::cout << this->Name << ": ";
}

//Default destructor
Zombie::~Zombie()
{
	std::cout << this->Name << ": Zombie has been died" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
