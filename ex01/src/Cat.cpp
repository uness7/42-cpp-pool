#include "Cat.hpp"

/* Default Constructor */
Cat::Cat( void )
{
	Animal("Cat");
	std::cout << "Cat Default constructor was called" << std::endl;
	this->o_brain = new Brain(); 
}

/* Destructor */
Cat::~Cat( void )
{
	std::cout << "Cat Destructor was called" << std::endl;
	delete this->o_brain;
}

/* Copy Constructor */
Cat::Cat( const Cat &copy)
{
	std::cout << "Cat Copy constructor was called" << std::endl;
	*this = copy;
}

/* Assignment overload operator */
Cat&	Cat::operator=( const Cat &copy )
{
	std::cout << "Cat Assignment overload operator was called" << std::endl;
	if (this != &copy)
		this->m_type = copy.m_type;
	return *this;
}

/* Member Function */
void	Cat::makeSound( void ) const
{
	std::cout << "Moew Moew" << std::endl;
}
