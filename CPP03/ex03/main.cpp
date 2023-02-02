#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    DiamondTrap diamondTrap("Monster");
    std::cout << "1 - Hit Point: " << diamondTrap.getHitPoints() << std::endl
    << "2 - Energy Point: " << diamondTrap.getEnergyPoint() << std::endl
    << "3 - Attack Point: " << diamondTrap.getAttackDamage() << std::endl;

    std::cout << "--------------------------------------------------" << std::endl;

    diamondTrap.attack("Target");
    std::cout << "1 - Hit Point: " << diamondTrap.getHitPoints() << std::endl 
    <<"2 - Energy Point: " << diamondTrap.getEnergyPoint() << std::endl
    <<"3 - Attack Point: " << diamondTrap.getAttackDamage() << std::endl;

    std::cout << "--------------------------------------------------" << std::endl;

    diamondTrap.takeDamage(50);
    if (diamondTrap.getHitPoints() >= 0 && diamondTrap.getEnergyPoint() > 0)
    {
        std::cout << "1 - Hit Point: " << diamondTrap.getHitPoints() << std::endl
        << "2 - Energy Point: " << diamondTrap.getEnergyPoint() << std::endl
        << "3 - Attack Point: " << diamondTrap.getAttackDamage() << std::endl;
    }

    std::cout << "--------------------------------------------------" << std::endl;
    
    diamondTrap.beRepaired(30);
    if (diamondTrap.getHitPoints() >= 0 && diamondTrap.getEnergyPoint() > 0)
    {
        std::cout << "1 - Hit Point: " << diamondTrap.getHitPoints() << std::endl
        <<"2 - Energy Point: " << diamondTrap.getEnergyPoint() << std::endl
        <<"3 - Attack Point: " << diamondTrap.getAttackDamage() << std::endl;
    }
    diamondTrap.whoAmI();

    return (0);
}