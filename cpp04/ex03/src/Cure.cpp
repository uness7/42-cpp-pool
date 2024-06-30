#include "Cure.hpp"

Cure::Cure( void )
{
	AMeteria("cure");
	std::cout << "Cure Default Constructor was called" << std::endl;
}

Cure::Cure( const Cure &copy )
{
	std::cout << "Cure Copy Constructor was called" << std::endl;
	*this = copy;
}

Cure&	Cure::operator=( const Cure &copy )
{
	std::cout << "Cure Assignment operator was called" << std::endl;
	if (this != &copy)
	{
		this->m_type = copy.m_type;
	}
	return *this;
}

Cure::~Cure( void )
{
	std::cout << "Cure Destructor was called" << std::endl;
}

/* Member Functions */
Cure	Cure::*clone( void ) const
{
	std::cout << "Cloned" << std::endl;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
}
