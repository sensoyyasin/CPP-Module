#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default Constructor" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap Constructor" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    this->name = name;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if ((this->hitPoints != 0 || this->energyPoints != 0) && (this->hitPoints > 0 && this->energyPoints > 0))
    {
        std::cout << "FragTrap " << this->name << " attacks " << target
        << " causing " << this->attackDamage << " points of damage! " << std::endl;
        this->energyPoints--;
    }
}

void FragTrap::takeDamage(unsigned int amount)
{
    if ((this->hitPoints != 0 || this->energyPoints != 0) && (this->hitPoints > 0 && this->energyPoints > 0))
    {
        std::cout << "FragTrap " << this->name << " takes "
        << amount << " points of damage! " << std::endl;
        this->hitPoints -= amount;
        if (this->hitPoints <= 0)
            std::cout << "\033[1;91mdead...\033[0m" << std::endl;
    }
}

void FragTrap::highFivesGuys()
{
    std::cout << this->name << " High Fives Guys"  << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if ((this->hitPoints != 0 || this->energyPoints != 0) && (this->hitPoints > 0 && this->energyPoints > 0))
    {
        std::cout << "FragTrap " << this->name << " get health "
        << amount << " points " << std::endl;
        this->hitPoints += amount;
        this->energyPoints--;
    }
}

void FragTrap::setName(std::string &name)
{
    this->name = name;
}

std::string FragTrap::getName()
{
    return (this->name);
}

void FragTrap::setHitPoints(int hitpoints)
{
    this->hitPoints = hitpoints;
}

int FragTrap::getHitPoints()
{
    return (this->hitPoints);
}

void FragTrap::setAttackDamage(int attack)
{
    this->attackDamage = attack;
}

int FragTrap::getAttackDamage()
{
    return (this->attackDamage);
}

void FragTrap::setEnergyPoint(int energyPoint)
{
    this->energyPoints = energyPoint;
}

int FragTrap::getEnergyPoint()
{
    return (this->energyPoints);
}