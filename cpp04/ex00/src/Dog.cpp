#include "Dog.hpp"

/* Default Constructor */
Dog::Dog( void )
{
	Animal("Dog");
	std::cout << "Dog Default Constructor was called" << std::endl;
}

/* Destructor */
Dog::~Dog( void )
{
	std::cout << "Dog Destructor was called" << std::endl;
}

/* Copy Constructor */
Dog::Dog( const Dog &copy )
{
	std::cout << "Dog copy constructor was called" << std::endl;
	*this = copy;
}

/* Assignment overload operator */
Dog	&Dog::operator=( const Dog &copy )
{
	std::cout << "Dog Assignment overload operator was called" << std::endl;
	if (this != &copy)
		this->m_type = copy.m_type;
	return *this;
}

/* Member Functions */
void	Dog::makeSound( void ) const
{
	std::cout << "Bark how how" << std::endl;
}
