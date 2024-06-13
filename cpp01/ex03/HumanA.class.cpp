/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzioual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:12:35 by yzioual           #+#    #+#             */
/*   Updated: 2024/06/13 12:16:44 by yzioual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& wp ) : _wp(wp)
{
	std::cout << "HumanA constructor was called" << std::endl;
	this->_name = name;
}

HumanA::~HumanA()
{
	std::cout << "HumanA De-constructor was called" << std::endl;
}

std::string	HumanA::getName( void ) const
{
	return this->_name;
}

void	HumanA::attack( void ) const
{
	std::cout 
		<< this->getName() 
		<< " attacks with their " 
		<< this->_wp.getType() 
		<< std::endl;
	return ;
}
