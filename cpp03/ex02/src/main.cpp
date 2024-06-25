#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int 	main()
{
	/*
	ClapTrap	bob = ClapTrap("Bob");

	bob.attack("a worm");
	bob.takeDamage(9);

	FragTrap	bib = FragTrap("Bib");

	bib.attack("a human");
	bib.highFivesGuys();
	bib.beRepaired(5);
	*/

	///////////////////////////////////////
	
	FragTrap frag1("Fraggy");
	FragTrap frag2(frag1);
	FragTrap frag3;
	frag3 = frag1;

	frag1.highFivesGuys();
	frag2.highFivesGuys();
	frag3.highFivesGuys();
}

