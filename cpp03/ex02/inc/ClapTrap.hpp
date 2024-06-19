#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string	_name;
		int		_hitPoints;
		int		_energyPoints;
		int		_attackDamage;

	public:
		/* Default Constructor, Constructor, Destructor, Copy Constructor, and Assignment Operator. */
		ClapTrap( void );
		ClapTrap( std::string name );
		~ClapTrap( void );
		ClapTrap( const ClapTrap &other );
		ClapTrap&	operator=( ClapTrap const &copy );


		/* Member Functions */
		void	attack( const std::string& target );
		void 	takeDamage( unsigned int amount );
		void 	beRepaired( unsigned int amount );
};

#endif // CLAPTRAP_HPP
