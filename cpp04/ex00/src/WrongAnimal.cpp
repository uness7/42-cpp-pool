#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal Default Constructor was called " << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : m_type(type)
{
	std::cout << "WrongAnimal Parameterized Constructor was called " << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal Destructor was called " << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& copy )
{
	std::cout << "WrongAnimal Copy Constructor was called " << std::endl;
	*this = copy;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& copy )
{
	std::cout << "WrongAnimal Assignment overload opeartor " << std::endl;
	if (this != &copy)
		this->m_type = copy.m_type;
	return *this;
}

std::string	WrongAnimal::getType( void ) const
{
	return this->m_type;	
}

void	WrongAnimal::setType( std::string type)
{
	this->m_type = type;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimals make WRONG SOUNDS " << std::endl;
}
