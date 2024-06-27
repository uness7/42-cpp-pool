#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
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

#endif
