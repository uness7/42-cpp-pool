/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzioual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:04:24 by yzioual           #+#    #+#             */
/*   Updated: 2024/06/13 11:47:38 by yzioual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {
	this->_type = type;
}

Weapon::~Weapon() {}

std::string	Weapon::getType( void ) const
{
	return this->_type;
}

void		Weapon::setType( std::string type )
{
	this->_type = type;
}
