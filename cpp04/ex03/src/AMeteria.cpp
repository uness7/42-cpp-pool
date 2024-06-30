#include "AMeteria.hpp"

AMeteria::AMeteria( void )
{
	std::cout << "AMeteria Default Constructor was called" << std::endl;
}

AMeteria::AMeteria( std::string type ) : m_type(type)
{
	std::cout << "AMeteria Parameterized Constructor was called" << std::endl;
}

AMeteria::AMeteria( const AMeteria &copy )
{
	std::cout << "AMeteria Copy Constructor was called" << std::endl;
	*this = copy;
}

AMeteria::AMeteria( const AMeteria &copy )
{
	std::cout << "AMeteria Copy Constructor was called" << std::endl;
	if ( this != &copy )
		this->m_type = copy.m_type;
	return *this;
}

AMeteria::~AMeteria( void )
{
	std::cout << "AMeteria Destructor was called" << std::endl;
}

const std::string	&getType( void ) const
{
	return this->m_type;
}
