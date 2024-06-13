/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzioual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:49:01 by yzioual           #+#    #+#             */
/*   Updated: 2024/06/13 11:01:50 by yzioual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "String value: " << str << std::endl;
	std::cout << "Pointer to string (stringPTR): " << *stringPTR << std::endl;
	std::cout << "Reference to string (stringREF): " << stringREF << std::endl;

	std::cout << "Address of the string variable: " << &str << std::endl;
	std::cout << "Address stored in stringPTR: " << stringPTR << std::endl;
	std::cout << "Address of the stringREF: " << &stringREF << std::endl;	

	return 0;
}

/* 
 * The differences between pointers and refs :
 *
 *
 * 	Pointers:
 * 	1. pointers are nullable and reassignable.
 * 	2. Pointers can have arithmetic operations.
 * 	
 *
 * 	Refs: 
 * 	1. Are not nullable, they must always be init to refer to a valid object.
 * 	2. Are not reassignable, once a ref is init to an object, it cannot be changed to 		refer to another object.
 * 	3. Accessing the value referred to by a reference doesn't require any operator
 * 		like pointers we need to use * op.	
 * 	4. No arithmetic ops for refs.
 * 	
 *
 * 	*/











