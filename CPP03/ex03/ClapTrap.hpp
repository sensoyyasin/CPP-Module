#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();

    //GETTER AND SETTER FOR print the private variables
    virtual std::string getName();
    virtual void setName(const std::string &Name);

    virtual void setHitPoints(int hitPoints);
    virtual int getHitPoints();

    virtual void setAttackDamage(int attack);
    virtual int getAttackDamage();

    virtual void setEnergyPoint(int energyPoint);
    virtual int getEnergyPoint();

    //functions
    virtual void attack(const std::string& target);
    virtual void takeDamage(unsigned int amount);
    virtual void beRepaired(unsigned int amount);
    
};

#endif