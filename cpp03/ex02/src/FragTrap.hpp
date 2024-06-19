#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ScavTrap.hpp"

class FragTrap : public ScavTrap
{
	public:
		FragTrap( void );
		FragTrap( const FragTrap& target );
		~FragTrap();

	private:
		int		_highFivesGuys;

};

#endif 
