#include "Zombie.hpp"

int main()
{
	Zombie zombie1 = Zombie();
	zombie1.announce();

	Zombie *zombie2 = newZombie("First Zombie");
	delete(zombie2);

	Zombie *zombie3 = new Zombie("Second Zombie");
	zombie3->announce();
	delete(zombie3);

	randomChump("Third Zombie");
	return (0);
}
