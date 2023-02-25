#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
public:
    DiamondTrap ();
    DiamondTrap (std::string name);
    ~DiamondTrap ();

    //extra function
    void whoAmI();
};

#endif