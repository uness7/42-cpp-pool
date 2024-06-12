/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzioual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:49:01 by yzioual           #+#    #+#             */
/*   Updated: 2024/06/12 19:56:08 by yzioual          ###   ########.fr       */
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
