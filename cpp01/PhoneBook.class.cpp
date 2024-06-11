#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	std::cout << "construct" << std::endl;
	return;
}

PhoneBook::~PhoneBook() {
	std::cout << "deconstruct" << std::endl;
	return;
}
