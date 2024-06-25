#include <iostream>
#include "ClapTrap.hpp"


int	main( void )
{
	ClapTrap	claptrap("CL4P-TP");

	// TEST ATTACKING
	claptrap.attack("target2");

	// TEST TAKING DAMAGE
	claptrap.takeDamage(3);
	claptrap.takeDamage(5);

	// TEST REPAIRING
	claptrap.beRepaired(4);
	claptrap.beRepaired(3);


	// TEST FURTHER ACTIONS WHEN ENERGY OR HIT POINTS ARE ZERO
	std::cout << "TEST WHEN HIT POINTS OR ENERGY POINTS EQUAL TO ZERO " << std::endl;
	claptrap.attack("target3");
	claptrap.takeDamage(10);
	claptrap.beRepaired(5);

	return 0;
}
