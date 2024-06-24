#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	public:
		/* Constructor */
		ClapTrap( void );
		ClapTrap( std::string name );
		~ClapTrap();

		/* Copy Constructor */
		ClapTrap( const ClapTrap &other );

		/* Overload Operator */
		ClapTrap&	operator=( ClapTrap const &copy );

		/* Member Functions */
		void	attack( const std::string& target );
		void 	takeDamage( unsigned int amount );
		void 	beRepaired( unsigned int amount );

	private:
		std::string		_name;
		unsigned int		_hitPoints;
		unsigned int		_energyPoints;
		unsigned int		_attackDamage;

};

#endif
