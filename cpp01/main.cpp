/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzioual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:57:42 by yzioual           #+#    #+#             */
/*   Updated: 2024/06/11 13:47:47 by yzioual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	
	std::string	cmd;
	PhoneBook	phoneBook;	
	Contact		contacts[8];
	
	while (1)
	{
		std::cout << "1. Add Contact\n";
		std::cout << "2. Search Contact\n";
		std::cout << "3. Exit Contact\n\n";

		std::cout << "Enter 1, 2, 3, or 4 to choose an operation: ";
		std::getline(std::cin, cmd);

		if (cmd == "1")
			std::cout << "you entered 1\n";
		else if (cmd == "2")
			std::cout << "you entered 2\n";
		else if (cmd == "3")
			std::cout << "you entered 3\n";
		else
			std::cout << "you entered else\n";
	}

	return 0;
}
