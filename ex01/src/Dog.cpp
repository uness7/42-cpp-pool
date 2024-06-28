#include "Dog.hpp"

/* Default Constructor */
Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "Dog Default Constructor was called" << std::endl;
	this->o_brain = new Brain();
}

/* Destructor */
Dog::~Dog( void )
{
	std::cout << "Dog Destructor was called" << std::endl;
	delete this->o_brain;
}

/* Copy Constructor */
Dog::Dog( const Dog &copy ) : Animal(copy), o_brain(new Brain(*copy.o_brain))
{
	std::cout << "Dog copy constructor was called" << std::endl;
	*this = copy;
}

/* Assignment overload operator */
Dog	&Dog::operator=( const Dog &copy )
{
	std::cout << "Dog Assignment overload operator was called" << std::endl;
	if (this != &copy)
	{
		Animal::operator=(copy);
		delete o_brain;
		o_brain = new Brain(*copy.o_brain);
	}
	return *this;
}

/* Member Functions */
void	Dog::makeSound( void ) const
{
	std::cout << "Bark how how" << std::endl;
}
