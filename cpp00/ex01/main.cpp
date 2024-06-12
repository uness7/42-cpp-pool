/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzioual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:57:42 by yzioual           #+#    #+#             */
/*   Updated: 2024/06/11 14:28:30 by yzioual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	PhoneBook phoneBook;
	std::string cmd;

	std::cout << "1. Add Contact\n";
	std::cout << "2. Search Contact\n";
	std::cout << "3. Exit Contact\n\n";
	while (1) {
		std::cout << "Enter 1, 2, 3 to choose an operation: ";
		std::getline(std::cin, cmd);

		if (cmd == "1")
			phoneBook.addContact();
		else if (cmd == "2")
			phoneBook.searchContacts();
		else if (cmd == "3")
			phoneBook.exitProgram();
		else
			std::cout << "you entered else\n";
	}

	return 0;
}
