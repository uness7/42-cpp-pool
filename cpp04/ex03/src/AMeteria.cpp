#include "AMeteria.hpp"

AMeteria::AMeteria( void )
{
	std::cout << "AMeteria Default Constructor was called" << std::endl;
}

/*
AMeteria::AMeteria( std::string )
{
	std::cout << "AMeteria Parameterized Constructor was called" << std::endl;
}
*/

AMeteria::AMeteria( const AMeteria &copy )
{
	std::cout << "AMeteria Copy Constructor was called" << std::endl;
	*this = copy;
}

AMeteria::AMeteria( const AMeteria &copy )
{
	std::cout << "AMeteria Copy Constructor was called" << std::endl;
	if ( this != &copy )
	{
	}
	return *this;
}

AMeteria::~AMeteria( void )
{
	std::cout << "AMeteria Destructor was called" << std::endl;
}
