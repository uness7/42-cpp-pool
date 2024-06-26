#include "ClapTrap.hpp"


/* Constructor */
ClapTrap::ClapTrap( void )
	: _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default Constructor called " << std::endl;
}

ClapTrap::ClapTrap( std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Constructor called " << std::endl;
}

/* Destructor */
ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap Deconstructor was called " << std::endl;
}

/* Copy Constructor */
ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
	*this = other;
}

/* Assignment overload Operator */
ClapTrap&	ClapTrap::operator=( ClapTrap const &copy )
{
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
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		std::cout 
			<< "ClapTrap " 
			<< this->_name 
			<< " attacks " 
			<< target 
			<< " causing "
			<< this->_attackDamage 
			<< " points of damage!" 
			<< std::endl;
	}
	else
	{
		std::cout 
			<< "ClapTrap " 
			<< this->_name 
			<< " doesn't have enough hit points!" 
			<< std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints <= 0)
	{
		std::cout 
			<< "ClapTrap " 
			<< this->_name 
			<< " doesn't have any hit points left." 
			<< std::endl;
	}
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout 
		<< "ClapTrap " << this->_name << " takes " 
		<< amount << " points of damage! Hit points left: " 
		<< this->_hitPoints << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{

	if (this->_hitPoints == 0)
	{
		std::cout 
			<< "ClapTrap " << this->_name 
			<< " has no hit points, so he can do nothing" << std::endl;
		return;
	}
	if ( _energyPoints > 0 )
	{
		this->_hitPoints+=amount;
		this->_energyPoints--;
		std::cout 
			<< "ClapTrap " << this->_name 
			<< " has been repaired, Hit Points : " 
			<< _hitPoints << std::endl;
	}
	else
	{
		std::cout 
			<< "ClapTrap " 
			<< this->_name 
			<< " has no energy points" 
			<< std::endl;
	}
}

/////////////////////////////////////////////////////////////////////


/* Getters & Setters */
void    ClapTrap::setName( std::string name )
{
	this->_name = name;
}

void    ClapTrap::setHitPoinst( int x )
{
	this->_hitPoints = x;
}

void    ClapTrap::setEnergyPoints( int x )
{
	this->_energyPoints = x;
}

void    ClapTrap::setAttackDamage( int x )
{
	this->_attackDamage = x;
}

std::string     ClapTrap::getName( void ) const
{
	return this->_name;
}

int	ClapTrap::getHitPoints( void ) const
{
	return this->_hitPoints;
}

int	ClapTrap::getEnergyPoints( void ) const
{
	return this->_energyPoints;
}

int             ClapTrap::getAttackDamage( void ) const
{
	return this->_attackDamage;
}

