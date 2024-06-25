#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	public:
		/* Default Constructor */
		ClapTrap( void );

		/* Constructor */
		ClapTrap( std::string name );

		/* Destructor */
		~ClapTrap( void );

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
