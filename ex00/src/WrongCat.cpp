#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	WrongAnimal("Dog");
	std::cout << "WrongCat Default Constructor was called " << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat Destructor was called " << std::endl;
}

WrongCat::WrongCat( const WrongCat& copy )
{
	std::cout << "WrongCat Copy Constructor was called " << std::endl;
	*this = copy;
}

WrongCat&	WrongCat::operator=( const WrongCat& copy )
{
	std::cout << "WrongCat Assignment operator was called " << std::endl;
	if (this != &copy)
		this->m_type = copy.m_type;
	return *this;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Bark Bark Bark Bark!" << std::endl;
}

