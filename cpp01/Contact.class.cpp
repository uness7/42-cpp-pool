/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzioual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:58:17 by yzioual           #+#    #+#             */
/*   Updated: 2024/06/11 13:42:44 by yzioual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact() {
}

Contact::~Contact()
{

}

std::string	Contact::getFirstName(void) const {
	return this->firstName;
}

std::string	Contact::getLastName(void) const {
	return this->lastName;
}

std::string	Contact::getNickname(void) const {
	return this->nickname;
}

std::string	Contact::getDarkestSecrets(void) const {
	return this->darkestSecrets;
}

int     Contact::getIndex(void) const {
	return this->index;
}

// Setters
void    Contact::setFirstName(std::string firstName) {
	this->firstName = firstName;
}

void    Contact::setLastName(std::string lastName) {
	this->lastName = lastName;
}

void    Contact::setNickname(std::string nickname) {
	this->nickname = nickname;
}

void    Contact::setDarkestSecrets(std::string darkestSecrets) {
	this->darkestSecrets = darkestSecrets;
}

void   	Contact::setIndex(int index) {
	this->index = index;
}

