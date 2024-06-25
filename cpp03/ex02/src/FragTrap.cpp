#include "FragTrap.hpp"

/* Default Constructor */
FragTrap::FragTrap( void )
{
	std::cout << "FragTrap Default Constructor " << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage =  30;
}

/* Parameterized Constructor */
FragTrap::FragTrap( const std::string name ) : ClapTrap(name)
{
	std::cout << "FragTrap Parameterized Constructor was called" << this->_name << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage =  30;
}

/* Destructor */
FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap Destructor was called for " << this->_name << std::endl;
}

/* Copy Constructor */
FragTrap::FragTrap( const FragTrap &other ) : ClapTrap(other)
{
	std::cout << "FragTrap Copy Constructor was called for " << other._name << std::endl;
	*this = other;
}

/* Assignment Operator */
FragTrap&	FragTrap::operator=( const FragTrap &other )
{
	if (this != &other)
	{
		std::cout 
		<< "FragTrap Assignment operator called for " << other._name << std::endl;
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

/* Member Functions */
void	FragTrap::highFivesGuys( void )
{
	std::cout << this->_name << ": High fives ?" << std::endl;
}
