#include "ScavTrap.hpp"

/////////////////////////////////////////////////////////////////////////////////////////////////

/* Default Constructor */

ScavTrap::ScavTrap( void )
{
	std::cout << "Default ScavTrap Constructor was called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_guardMode = false;
}

/* Constructor */

ScavTrap::ScavTrap( const std::string name ) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor was called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_guardMode = false;
}

/* De-constructor */

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Deconstructor was called" << std::endl;
}

/* Copy Constructor */

ScavTrap::ScavTrap( const ScavTrap &other ) : ClapTrap(other)
{
	std::cout << "Copy Constructor was called " << std::endl;
	*this = other;
}

/* Assignment Operator */

ScavTrap&	ScavTrap::operator=( const ScavTrap &other )
{
	if (&other != this)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
		this->_guardMode = other._guardMode;
	}
	return *this;
}

////////////////////////////////////////////////////////////////////////////////////////////////

/* Member functions */

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name 
			<< " doesn't have any hit points or energy points left." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target 
		<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void	ScavTrap::guardGate( void )
{
	if (this->_guardMode == true)
	{
		std::cout << "ScavTrap " << this->_name << " is already in Gate Keeper mode." << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode." << std::endl;
		this->_guardMode = true;
	}
}
