/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzioual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:24:02 by yzioual           #+#    #+#             */
/*   Updated: 2024/06/12 13:26:32 by yzioual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie zombie1 = Zombie("foo");

	zombie1.announce();

	Zombie *zombie3 = Zombie::newZombie("foobar");
	zombie3->announce();

	Zombie::randomChump("yFooBar");

	delete zombie3;
	return 0;
}
