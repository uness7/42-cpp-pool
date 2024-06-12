#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie() {
	std::cout << this->_name << " destructed" << std::endl;
}

std::string	Zombie::getName( void ) const
{
	return this->_name;
}

void	Zombie::setName( std::string name )
{
	this->_name = name;
}

void	Zombie::announce( void )
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*Zombie::newZombie(std::string name)
{
	return (new Zombie(name));
}
