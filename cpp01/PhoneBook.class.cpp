/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzioual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:56:48 by yzioual           #+#    #+#             */
/*   Updated: 2024/06/11 14:26:39 by yzioual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook() {
}

void	PhoneBook::addContact() {
	if (contacts.size() >= maxContacts) {
		contacts.erase(contacts.begin()); // Remove the oldest contact
	}

	Contact newContact;
	std::string input;

	std::cout << "Enter your first name: ";
	std::getline(std::cin, input);
	newContact.setFirstName(input);

	std::cout << "Enter your last name: ";
	std::getline(std::cin, input);
	newContact.setLastName(input);

	std::cout << "Enter your nickname: ";
	std::getline(std::cin, input);
	newContact.setNickname(input);

	std::cout << "Enter your phone number: ";
	std::getline(std::cin, input);
	newContact.setPhoneNumber(input);

	std::cout << "Enter your darkest secret: ";
	std::getline(std::cin, input);
	newContact.setDarkestSecret(input);

	contacts.push_back(newContact);
}
