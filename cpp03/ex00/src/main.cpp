#include <iostream>
#include "ClapTrap.hpp"


int	main( void )
{
	ClapTrap claptrap("CL4P-TP");

	// Test attacking
	claptrap.attack("target1");
	claptrap.attack("target2");

	// Test taking damage
	claptrap.takeDamage(3);
	claptrap.takeDamage(5);

	// Test repairing
	claptrap.beRepaired(4);
	claptrap.beRepaired(3);

	// Test further actions when energy or hit points are zero
	claptrap.attack("target3");
	claptrap.takeDamage(10);
	claptrap.beRepaired(5);

	return 0;
}
