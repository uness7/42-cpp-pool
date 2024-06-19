#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int 	main()
{
	ClapTrap	bob = ClapTrap("Bob");

	bob.attack("a worm");
	bob.takeDamage(9);

	FragTrap	bib = FragTrap("Bib");

	bib.attack("a human");
	bib.highFivesGuys();
	bib.beRepaired(5);
}

