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
		for (int i = 0; i < 100; i++)
			this->m_ideas[i] = copy.m_ideas[i];
	return *this;
}

/* Getter & Setter */
void	Brain::setIdea( int index, std::string const &idea )
{
	if (index >= 0 && index < 100)
		this->m_ideas[index] = idea;
}

std::string	Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return this->m_ideas[index];
	return NULL;
}
