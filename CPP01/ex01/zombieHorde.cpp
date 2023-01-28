#include <iostream>
#include "Zombie.hpp"

Zombie*    zombieHorde(int count, std::string name)
{
    int i = 0;

    Zombie *zombie1 = new Zombie[count];
    while (count > i)
    {
        zombie1[i].setName(name);
        i++;
    }
    return (zombie1);
}
