#pragma once

#include <iostream>
#include <string>

class Brain
{
	public:
		/* Default Constructor */
		Brain( void );

		/* Destructor */	
		~Brain( void );

		/* Constructor */	
		Brain( std::string name ) ;

		/* Copy Constructor */
		Brain( const Brain &copy) ;

		/* Assignment Copy operator overload */
		Brain&	operator=( const Brain &copy ) ;

		/* Attributes */
		std::string	ideas;
};
