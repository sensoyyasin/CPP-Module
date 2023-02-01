#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default Constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap Constructor" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->name = name;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << this->name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if ((this->hitPoints != 0 || this->energyPoints != 0) && (this->hitPoints > 0 && this->energyPoints > 0))
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target
        << " causing " << this->attackDamage << " points of damage! " << std::endl;
        this->energyPoints--;
    }
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if ((this->hitPoints != 0 || this->energyPoints != 0) && (this->hitPoints > 0 && this->energyPoints > 0))
    {
        std::cout << "ScavTrap " << this->name << " takes "
        << amount << " points of damage! " << std::endl;
        this->hitPoints -= amount;
        if (this->hitPoints <= 0)
            std::cout << "\033[1;91mdead...\033[0m" << std::endl;
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if ((this->hitPoints != 0 || this->energyPoints != 0) && (this->hitPoints > 0 && this->energyPoints > 0))
    {
        std::cout << "ScavTrap " << this->name << " get health "
        << amount << " points " << std::endl;
        this->hitPoints += amount;
        this->energyPoints--;
    }
}

void ScavTrap::setName(std::string &name)
{
    this->name = name;
}

std::string ScavTrap::getName()
{
    return (this->name);
}

void ScavTrap::setHitPoints(int hitpoints)
{
    this->hitPoints = hitpoints;
}

int ScavTrap::getHitPoints()
{
    return (this->hitPoints);
}

void ScavTrap::setAttackDamage(int attack)
{
    this->attackDamage = attack;
}

int ScavTrap::getAttackDamage()
{
    return (this->attackDamage);
}

void ScavTrap::setEnergyPoint(int energyPoint)
{
    this->energyPoints = energyPoint;
}

int ScavTrap::getEnergyPoint()
{
    return (this->energyPoints);
}