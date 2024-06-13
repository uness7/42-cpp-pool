/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzioual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:04:07 by yzioual           #+#    #+#             */
/*   Updated: 2024/06/13 13:24:04 by yzioual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

int	main()
{
	Weapon	wp1 = Weapon("Star Wars");
	HumanA	h1 = HumanA( "waizi", wp1);

	h1.attack();
	wp1.setType("omar");
	h1.attack();

	Weapon	wp = Weapon("Star Wars");
	HumanB	h2 = HumanB("waizi");
	h2.setWeapon(wp);
	h2.attack();

	wp.setType("omar");
	h2.attack();

	return 0;
}
