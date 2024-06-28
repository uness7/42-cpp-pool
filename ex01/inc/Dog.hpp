#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*o_brain;

	public:
		/* Default Constructor */
		Dog( void );

		/* Destructor */	
		~Dog( void );

		/* Copy Constructor */
		Dog( const Dog &copy );

		/* Assignment Copy operator overload */
		Dog&	operator=( const Dog &copy );

		void	makeSound( void ) const ;
};
