#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int 	main()
{
	// Create a ScavTrap object
	ScavTrap scavtrap("SC4V-TP");

	// Test ScavTrap specific function
	scavtrap.guardGate();

	// Test inherited functions
	scavtrap.attack("target1");
	scavtrap.takeDamage(5);
	scavtrap.beRepaired(3);

	return 0;
}

