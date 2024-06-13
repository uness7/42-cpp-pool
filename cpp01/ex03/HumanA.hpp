/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzioual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:12:41 by yzioual           #+#    #+#             */
/*   Updated: 2024/06/13 12:04:28 by yzioual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
	public:
		HumanA( std::string name, Weapon& wp );
		~HumanA( void );

		std::string getName( void ) const;
		void attack( void ) const;

	private:
		std::string	_name;
		Weapon&		_wp;
};

#endif 
