#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( const std::string name );
		ScavTrap( const ScavTrap & );
		ScavTrap& operator=( const ScavTrap &copy );
		~ScavTrap();

		/* Member Functions */
		void	guardGate( void );
		void	attack( const std::string &target );

	private:
		bool		_guardMode;
};

#endif 
