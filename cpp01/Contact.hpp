/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzioual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:02:19 by yzioual           #+#    #+#             */
/*   Updated: 2024/06/11 13:12:39 by yzioual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	public:

		Contact();
		~Contact();

		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickname(void) const;
		std::string	getDarkestSecrets(void) const;
		int		getIndex(void) const;

		void	setFirstName(std::string firstName);
		void	setLastName(std::string lastName);
		void	setNickname(std::string nickname);
		void	setDarkestSecrets(std::string darkestSecrets);
		void	setIndex(int index);

	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	darkestSecrets;
		std::string	phoneNumber;
		int		index;
};

#endif 
