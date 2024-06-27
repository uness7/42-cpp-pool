#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "A Brain was Constructed" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "A Brain was Destroyed" << std::endl;
}

Brain::Brain( const Brain &copy ) 
{
	std::cout << "Brain Copy Constructor was called" << std::endl;
	*this = copy;
}

Brain&	Brain::operator=( const Brain &copy )
{
	std::cout << "Brain Assignment overload operator was called" << std::endl;
	if (this != &copy)
		this->ideas = copy.ideas;
	return *this;
}
