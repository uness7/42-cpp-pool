/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzioual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:27:34 by yzioual           #+#    #+#             */
/*   Updated: 2024/06/13 13:23:43 by yzioual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name) 
{
	std::cout << "HumanB constructor was called" << std::endl;
	this->_name = name;
}

HumanB::~HumanB()
{
	std::cout << "HumanB de-constructor was called" << std::endl;
}

std::string	HumanB::getName( void ) const 
{
	return this->_name;
}

void		HumanB::setWeapon( Weapon& wp )
{
	this->_wp = &wp;
}

void		HumanB::attack( void ) const
{
	std::cout 
		<< this->_name 
		<< " attacks with their " 
		<< this->_wp->getType()
		<< std::endl;
	return ;
}
