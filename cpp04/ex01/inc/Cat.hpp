#pragma once

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*o_brain;

	public:
		/* Default Constructor */
		Cat( void );

		/* Destructor */	
		~Cat( void );

		/* Copy Constructor */
		Cat( const Cat &copy) ;

		/* Assignment Copy operator overload */
		Cat&	operator=( const Cat &copy ) ;

		/* Member Functions */
		virtual void makeSound( void ) const ;
		void	setIdea( int index, std::string idea ) ; 
		std::string	getIdea( int index ) const ;
};
