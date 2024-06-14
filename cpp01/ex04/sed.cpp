/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzioual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:51:51 by yzioual           #+#    #+#             */
/*   Updated: 2024/06/13 15:59:44 by yzioual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

/* 
 * std::ifstream is used to open to read from file.
 * std::ofstream is used to open to write to file
 * std::fstream is used for both reading and writing from and to file
 *
 * */

void replaceAll(std::string &str, const std::string &from, const std::string &to) {
	if (from.empty()) return;
	std::string newStr;
	size_t pos = 0;
	size_t fromLen = from.length();
	while ((pos = str.find(from, pos)) != std::string::npos) {
		newStr.append(str, 0, pos); // Append part of the string before the match
		newStr.append(to);          // Append the replacement
		pos += fromLen;
		str.erase(0, pos);          // Erase the processed part of the string
		pos = 0;                    // Reset pos to start from the beginning of the new str
	}
	newStr.append(str);             // Append the remainder of the string
	str.swap(newStr);               // Replace the original string with the new one
}

void	sed(char **av)
{
	std::string	line;
	std::ifstream	infile(av[1]);
	std::ofstream	outfile("output.txt");

	if (!infile) {
		std::cout << "Failed to open file : " << av[1] << std::endl;
		return ;
	}
	if (!outfile) {
		std::cout << "Failed to open file : output" << std::endl;
		return ;
	}
	while (std::getline(infile, line)) {
		replaceAll(line, av[2], av[3]);
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
}
