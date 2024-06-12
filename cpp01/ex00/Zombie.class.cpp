/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzioual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:28:12 by yzioual           #+#    #+#             */
/*   Updated: 2024/06/12 13:18:19 by yzioual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie() {
	std::cout << this->_name << " destructed" << std::endl;
}

std::string	Zombie::getName( void ) const
{
	return this->_name;
}

void	Zombie::setName( std::string name ) 
{
	this->_name = name;
}

void	Zombie::announce( void )
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*Zombie::newZombie(std::string name)
{
	return (new Zombie(name));
}

void	Zombie::randomChump( std::string name )
{
	Zombie one = Zombie(name);	
	one.announce();
}
