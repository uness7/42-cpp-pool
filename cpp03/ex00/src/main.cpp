#include <iostream>
#include "ClapTrap.hpp"


int	main( void )
{
	ClapTrap claptrap("CL4P-TP");
	ClapTrap test(claptrap);
	std::cout << "Copy " << std::endl;
	test.attack("test");
	std::cout << "\n\n";
	// Test attacking
	std::cout << "first attack " << std::endl;
	claptrap.attack("target1");

	std::cout << "\n\n";

	std::cout << "second attack " << std::endl;
	claptrap.attack("target2");

	std::cout << "\n\n";

	// Test taking damage
	std::cout << "take damage first " << std::endl;
	claptrap.takeDamage(3);
	std::cout << "take damage second " << std::endl;
	claptrap.takeDamage(5);

	std::cout << "\n\n";

	// Test repairing
	std::cout << "repair first " << std::endl;
	claptrap.beRepaired(4);
	std::cout << "repair second " << std::endl;
	claptrap.beRepaired(3);


	std::cout << "\n\n";

	// Test further actions when energy or hit points are zero
	std::cout << "Test when hit points or energy points equal to zero " << std::endl;
	claptrap.attack("target3");
	claptrap.takeDamage(10);
	claptrap.beRepaired(5);

	return 0;
}
