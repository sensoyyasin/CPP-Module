#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();

    //GETTER AND SETTER FOR print the private variables
    std::string getName();
    void setName(std::string &Name);

    void setHitPoints(int hitPoints);
    int getHitPoints();

    void setAttackDamage(int attack);
    int getAttackDamage();

    void setEnergyPoint(int energyPoint);
    int getEnergyPoint();

    //functions
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    //extra
    void guardGate();
};

#endif