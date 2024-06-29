#include <iostream>
#include "Dog.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	Animal	*meta = new Animal();
	Animal	*snoopDog = new Dog();
	Animal	*catty = new Cat();

	std::cout << snoopDog->getType() << " " << std::endl;
	std::cout << catty->getType() << " " << std::endl;

	std::cout << "\n";
	std::cout << "Expected sound : Dog sound\t";
	snoopDog->makeSound();

	std::cout << "Expected sound : Cat sound\t" ;
	catty->makeSound();

	std::cout << "Expected sound : Animal sound\t" ;
	meta->makeSound();
	std::cout << "\n";


	delete snoopDog;
	delete catty;
	delete meta;

	return 0;
}
