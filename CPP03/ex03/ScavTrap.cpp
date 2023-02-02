#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default Constructor" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoint(50);
    this->setAttackDamage(20);
    std::string  a = "Yasin";
    this->setName(a);
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap Constructor" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoint(50);
    this->setAttackDamage(20);
    this->setName(name);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << this->getName() << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if ((getHitPoints() != 0 || getEnergyPoint() != 0) && (getHitPoints() > 0 && getEnergyPoint() > 0))
    {
        std::cout << "ScavTrap " << getName() << " attacks " << target
        << " causing " << getAttackDamage() << " points of damage! " << std::endl;
        setEnergyPoint(getEnergyPoint() - 1);
    }
}