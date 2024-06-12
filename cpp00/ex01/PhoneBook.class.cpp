/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzioual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:56:48 by yzioual           #+#    #+#             */
/*   Updated: 2024/06/12 11:09:22 by yzioual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

PhoneBook::PhoneBook() : count(0), oldestIndex(0) {}
PhoneBook::~PhoneBook() {}

void PhoneBook::addContact()
{
	Contact contact;
	std::string input;

	std::cout << "Enter your firstname: ";
	std::getline(std::cin, input);
	contact.setFirstName(input);

	std::cout << "Enter your last name: ";
	std::getline(std::cin, input);
	contact.setLastName(input);

	std::cout << "Enter your nickname: ";
	std::getline(std::cin, input);
	contact.setNickname(input);

	std::cout << "Enter your phone number: ";
	std::getline(std::cin, input);
	contact.setPhoneNumber(input);

	std::cout << "Enter your darkest secret: ";
	std::getline(std::cin, input);
	contact.setDarkestSecrets(input);

	if (count < 8) {
		contacts[count] = contact;
		count++;
	} else {
		contacts[oldestIndex] = contact;
		oldestIndex = (oldestIndex + 1) % 8;
	}
}

void	PhoneBook::exitProgram() const { exit(0); }

void	PhoneBook::searchContacts() const
{
	if (count == 0) {
		std::cout << "No contacts available." << std::endl;
		return;
	}

	std::cout << std::setw(10) << "Index"
			  << "|" << std::setw(10) << "First Name"
			  << "|" << std::setw(10) << "Last Name"
			  << "|" << std::setw(10) << "Nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;


	for (int i = 0; i < count; i++) {
		std::cout << std::setw(10) << i << "|" << std::setw(10) << contacts[i].getFirstName().substr(0, 9) + (contacts[i].getFirstName().length() > 9 ? "." : "")
				  << "|" << std::setw(10)
				  << contacts[i].getLastName().substr(0, 9) +
						 (contacts[i].getLastName().length() > 9 ? "." : "")
				  << "|" << std::setw(10)
				  << contacts[i].getNickname().substr(0, 9) +
						 (contacts[i].getNickname().length() > 9 ? "." : "")
				  << std::endl;
	}

	std::cout << "Enter index to display: ";
	int index;
	std::cin >> index;
	std::cin.ignore();

	if (index >= 0 && index < count) {
		std::cout << "First Name: " << contacts[index].getFirstName()
				  << std::endl;
		std::cout << "Last Name: " << contacts[index].getLastName()
				  << std::endl;
		std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
		std::cout << "Phone Number: " << contacts[index].getPhoneNumber()
				  << std::endl;
		std::cout << "Darkest Secret: " << contacts[index].getDarkestSecrets()
				  << std::endl;
	} else {
		std::cout << "Invalid index." << std::endl;
	}
}
