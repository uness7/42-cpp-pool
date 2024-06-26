#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int 	main()
{
	ClapTrap	bob = ClapTrap("Bob");
	FragTrap	bib = FragTrap("Bib");

	bob.attack("a worm");
	bob.takeDamage(9);


	bib.highFivesGuys();
	bib.beRepaired(5);
	bib.attack("a human");

	///////////////////////////////////////
	
	/*
	FragTrap frag1("Fraggy");
	FragTrap frag2(frag1);
	FragTrap frag3;
	frag3 = frag1;

	frag1.highFivesGuys();
	frag2.highFivesGuys();
	frag3.highFivesGuys();
	*/
}

