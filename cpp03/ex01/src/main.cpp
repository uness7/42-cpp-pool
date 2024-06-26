#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int 	main()
{
	ScavTrap scavtrap("SC4V-TP");

	scavtrap.guardGate();

	scavtrap.attack("target1");
	scavtrap.takeDamage(5);
	scavtrap.beRepaired(3);

	return 0;
}

