#include "Animal.hpp"

/* Default Constructor */
Animal::Animal( void )
{
	std::cout << "Animal Default Constructor was called" << std::endl;
}

/* Paramterized Constructor */
Animal::Animal( std::string type )
{
	std::cout << "Animal Parameterized Constructor was called" << std::endl;
	this->m_type = type;
}

/* Destructor */
Animal::~Animal( void )
{
	std::cout << "Animal Destructor was called" << std::endl;
}

/* Copy constructor */
Animal::Animal( const Animal &copy )
{
	std::cout << "Animal Copy Constructor was called" << std::endl;
	*this = copy;
}

/* Assignment Operator */
Animal	&Animal::operator=( const Animal &copy )
{
	std::cout << "Animal Assignment overload operator was called" << std::endl;
	if (this != &copy)
		this->m_type = copy.getType();
	return *this;
}

/* Getter & Setter */
std::string	Animal::getType( void ) const
{
	return this->m_type;
}

void	Animal::setType( const std::string type )
{
	this->m_type = type;
}

/* Member Functions */
void	Animal::makeSound( void ) const
{
	std::cout << "Animals make sounds ! " << std::endl;
}

