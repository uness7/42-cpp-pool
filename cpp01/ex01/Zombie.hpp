/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzioual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:06:52 by yzioual           #+#    #+#             */
/*   Updated: 2024/06/12 19:38:37 by yzioual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie();
		Zombie(std:: string name);
		~Zombie();

		void announce( void );
		static Zombie	*newZombie( std::string name );
		static void randomChump( std::string name );

		std::string getName( void ) const;

		void setName(std::string name);

	private:
		std::string	_name;
};

#endif 
