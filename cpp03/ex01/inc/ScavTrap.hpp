#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		/* Default Constructor */
		ScavTrap( void );

		/* Constructor */
		ScavTrap( const std::string name );

		/* Copy constructor */
		ScavTrap( const ScavTrap & );

		/* Assignment operator overload */
		ScavTrap& operator=( const ScavTrap &copy );

		/* Destructor */
		~ScavTrap();

		/* Member Functions */
		void	guardGate( void );
		void	attack( const std::string &target );

		/* Getters */
		bool	getGuardMode( void ) const ;

		/* Setters */
		void	setGuardMode( bool value );

	private:
		bool		_guardMode;
};

#endif 
