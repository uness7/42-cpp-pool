#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( const std::string name );
		FragTrap( const FragTrap& target );
		~FragTrap( void );
		FragTrap&	operator=( const FragTrap& other );

		/* Member Functions */
		void	highFivesGuys( void );
};

#endif 
