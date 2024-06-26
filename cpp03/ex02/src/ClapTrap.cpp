#include "ClapTrap.hpp"

/* Deafault Constructor */
ClapTrap::ClapTrap( void ) : _name("default")
{
	std::cout << "ClapTrap Default Constructor called " << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

/* Parameterized Constructor */
ClapTrap::ClapTrap( std::string name) 
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Parameterized Constructor called " << std::endl;
}
 
/* Destructor */
ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap Destructor was called for " << this->_name << std::endl;
}

/* Copy Constructor */
ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap Copy constructor called for " << other._name << std::endl;
	*this = other;
}

/* Overload Operator */
ClapTrap&	ClapTrap::operator=( ClapTrap const &copy )
{
	std::cout << "ClapTrap Assignment Operator overload for " << copy._name << std::endl;
	if ( this != &copy )
	{
		this->_name = copy._name;
		this->_hitPoints = copy._hitPoints;
		this->_energyPoints = copy._energyPoints;
		this->_attackDamage = copy._attackDamage;
	}
	return *this;
}

/* Member Functions */
void	ClapTrap::attack( const std::string& target )
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " doesn't have enough hit points!" 
			<< std::endl;
		return ;
	}
	std::cout  << "ClapTrap " << this->_name << " attacks " << target << " causing "
		<< this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " doesn't have any hit points left." 
			<< std::endl;
	}
	if (this->_hitPoints > amount)
		this->_hitPoints -= amount;
	else
		this->_hitPoints = 0;
	std::cout 
		<< "ClapTrap " << this->_name << " takes " 
		<< amount << " points of damage! Hit points left: " 
		<< this->_hitPoints << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{

	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout  << "ClapTrap " << this->_name << " has no hit points, so he can do nothing" 
			<< std::endl;
		return;
	}
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout 
		<< "ClapTrap " << this->_name << "now has been repaired, he's got hit Points : " 
		<< this->_hitPoints << std::endl;
}

