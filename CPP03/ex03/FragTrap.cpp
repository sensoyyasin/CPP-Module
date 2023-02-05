#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default Constructor" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoint(100);
    this->setAttackDamage(30);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap Constructor" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoint(100);
    this->setAttackDamage(30);
    this->setName(name);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor" << std::endl;
}