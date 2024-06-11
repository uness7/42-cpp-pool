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
#include <cctype>

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		std::string result;
		for (int i = 1; i < ac; i++)
		{
			int	j = -1;
			while (av[i][++j])
				result += toupper(av[i][j]);
			if (i < ac - 1)
				result += ' ';
		}
		std::cout << result << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
