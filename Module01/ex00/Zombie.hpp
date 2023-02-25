#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Zombie
{
private:
	std::string Name;
public:
	Zombie();

	Zombie(std::string);

	~Zombie();

	void announce( void );
};

Zombie *newZombie(std::string name);

void randomChump(std::string name);


#endif
