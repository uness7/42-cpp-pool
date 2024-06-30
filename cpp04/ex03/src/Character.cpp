#include "Character.hpp"

Character::Character( void )
{
	std::cout << "Character Default Constructor was called" << std::endl;
}

Character::~Character( void )
{
	std::cout << "Character Destructor was called" << std::endl;
}

Character::Character( const Character &copy )
{
	std::cout << "Character Copy Constructor was called" << std::endl;
	*this = copy;
}

Character&	Character::operator=( const Character &copy )
{
	std::cout << "Character Assignment operator was called" << std::endl;
	if (this != &copy)
		this->m_name = copy.m_name;
	return *this;
}


