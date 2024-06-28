#include <iostream>
#include "Dog.hpp"
#include "Animal.hpp"
#include "Cat.hpp"

int	main( void )
{
	int	size = 100;
	Animal	*objs[size];

	for ( int i = 0; i < size / 2; i++)
		objs[i] = new Dog();

	for ( int i = size / 2; i < size ; i++)
		objs[i] = new Cat();

	for ( int i = 0 ; i < size ; i++ )
		delete objs[i];

	std::cout << std::endl;

	Dog dog1;
	Dog dog2 = dog1;
	Dog dog3;
	dog3 = dog1;

	Cat cat1;
	Cat cat2 = cat1;
	Cat cat3;
	cat3 = cat1;


	// I need to add more tests to test deep copying

	return 0;
}
