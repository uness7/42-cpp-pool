#include "ICharacter.hpp"

ICharacter::~ICharacter( void )
{
	std::cout << "ICharacter Destructor was called" << std::endl;
}

std::string& const      getName( void ) const
{
	return this->m_name;
}
