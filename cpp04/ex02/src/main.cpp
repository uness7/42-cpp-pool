#include <iostream>
#include "Dog.hpp"
#include "Animal.hpp"
#include "Cat.hpp"

// Define color codes for console output
#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define BOLD    "\033[1m"
#define UNDERLINE "\033[4m"


int	main( void )
{
	int	size = 10;
	Animal	*objs[size];

	// Creation of 50 Dog objs
	for ( int i = 0; i < size / 2; i++)
		objs[i] = new Dog();

	std::cout << std::endl;

	// Creation of 50 Cat objs
	for ( int i = size / 2; i < size ; i++)
		objs[i] = new Cat();

	std::cout << std::endl;

	// Deletion of the 100 objs
	for ( int i = 0 ; i < size ; i++ )
		delete objs[i];


	// TESTS FOR DEEP COPYING
	std::cout << std::endl;
	std::cout << BOLD << MAGENTA << "TESTS FOR DEEP COPYING (Dog version)" << RESET << std::endl;
	Dog dog1;
	Dog dog2;
	std::cout << std::endl;
	dog1.setIdea(0, "Chase the ball");
	dog2 = dog1;
	std::cout << std::endl;
	std::cout << "Dog1's idea: " << YELLOW << dog1.getIdea(0) << RESET << std::endl;
	std::cout << "Dog2's idea: " << YELLOW << dog2.getIdea(0) << RESET << std::endl;
	std::cout << std::endl;
	// Modifying the dog2's idea
	dog2.setIdea(0, "Chasing the ball is a bad idea, bitch!");
	std::cout << "After modifying Dog2's idea:" << std::endl;
	std::cout << "Dog1's idea: " << YELLOW << dog1.getIdea(0) << RESET << std::endl;
	std::cout << "Dog2's idea: " << YELLOW << dog2.getIdea(0) << RESET << std::endl;

	std::cout << std::endl << std::endl;
	std::cout << BOLD << MAGENTA << "TESTS FOR DEEP COPYING (Cat version)" << RESET << std::endl;

	Cat cat1;
	Cat cat2;

	cat1.setIdea(0, "Playing with a football looks fun! Meow");
	cat2 = cat1;
	std::cout << std::endl;
	std::cout << "Cat1's idea: " << YELLOW << cat1.getIdea(0) << RESET << std::endl;
	std::cout << "Cat2's idea: " << YELLOW << cat2.getIdea(0) << RESET << std::endl;
	std::cout << std::endl;
	// Modifying the cat2's idea
	cat2.setIdea(0, "Playing with tennis balls looks fun! Meow");
	std::cout << "After modifying Cat2's idea:" << std::endl;
	std::cout << "Cat1's idea: " << YELLOW << cat1.getIdea(0) << RESET << std::endl;
	std::cout << "Cat2's idea: " << YELLOW << cat2.getIdea(0) << RESET << std::endl;

	std::cout << std::endl;

	return 0;
}
