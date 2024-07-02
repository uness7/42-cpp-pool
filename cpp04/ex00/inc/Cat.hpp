#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		/* Default Constructor */
		Cat( void );

		/* Destructor */	
		~Cat( void );

		/* Copy Constructor */
		Cat( const Cat &copy) ;

		/* Assignment Copy operator overload */
		Cat&	operator=( const Cat &copy ) ;

		void makeSound( void ) const ;
};

#endif
