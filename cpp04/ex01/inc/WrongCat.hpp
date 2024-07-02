#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		/* Default Constructor */
		WrongCat( void );

		/* Destructor */	
		~WrongCat( void );

		/* Constructor */	
		WrongCat( std::string name ) ;

		/* Copy Constructor */
		WrongCat( const WrongCat &copy) ;

		/* Assignment Copy operator overload */
		WrongCat&	operator=( const WrongCat &copy ) ;

		void	makeSound( void ) const;
};

#endif // WRONGCAT_HPP
