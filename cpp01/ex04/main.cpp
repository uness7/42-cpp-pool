/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzioual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:17:44 by yzioual           #+#    #+#             */
/*   Updated: 2024/06/13 15:54:18 by yzioual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"
#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	(void)av;
	if (ac == 4)
	{
		sed(av);
	}
	else
	{
		std::cout 
			<< "Arguments Needed: \n" 
			<< "[usage]: <filename> <string1> <string2> "
			<< std::endl;
	}
	return 0;
}
