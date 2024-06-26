/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzioual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:07:15 by yzioual           #+#    #+#             */
/*   Updated: 2024/06/12 19:47:35 by yzioual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "zombieHorde.hpp"

int	main()
{
	int	count = 3;
	Zombie *zombies = zombieHorde(count, "waizi");
	if (zombies == NULL)
		return -1;
	else
	{
		int	i = 0;
		while (i < count)
		{
			zombies[i].announce();
			i++;
		}
		delete[] zombies;
	}

	return 0;
}
