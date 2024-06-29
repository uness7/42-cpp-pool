#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string	m_type;

	public:
		/* Default Constructor */
		WrongAnimal( void );

		/* Destructor */	
		virtual ~WrongAnimal( void );

		/* Constructor */	
		WrongAnimal( std::string name ) ;

		/* Copy Constructor */
		WrongAnimal( const WrongAnimal &copy) ;

		/* Assignment Copy operator overload */
		WrongAnimal&	operator=( const WrongAnimal &copy ) ;

		/* Getter & Setter */
		void	setType( std::string type ) ;
		std::string	getType( void ) const ;

		/* Member Functions */
		virtual void makeSound( void ) const;
};
