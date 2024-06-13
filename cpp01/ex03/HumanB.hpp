/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzioual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:27:43 by yzioual           #+#    #+#             */
/*   Updated: 2024/06/13 13:23:55 by yzioual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
	public:
		HumanB( std::string name );
		~HumanB();

		std::string	getName( void ) const;
		void		setWeapon( Weapon& wp );
		void		attack( void ) const;	

	private:
		std::string	_name;
		Weapon		*_wp; 

	//Since HumanB may or may not have a weapon, a pointer 
	// 	can be used to allow for nullability.
};

#endif
