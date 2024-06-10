/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzioual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:02:34 by yzioual           #+#    #+#             */
/*   Updated: 2024/06/10 16:28:21 by yzioual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	
	if (ac > 1)
	{
		i = 1;
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				if (av[i][j] <= 'z' && av[i][j] <= 'a')
					std::cout << av[i][j] - 32;
				else
					std::cout << av[i][j];
				j++;
			}
			std::cout << " ";
			i++;
		}
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
