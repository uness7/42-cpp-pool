#pragma once
#include <iostream>
#include <string>
#include "ICharacter.hpp"

/*
 * DEFINITIONS :
 * An abstract class is a class that cannot be instantiated on its own and is meant to 
 * 	be subclassed. It can contain both abstract methods (w/o implementation) and
 * 	concrete methods (w/ implementation).
 * Suitable when we need to have a common base class and want to have sharable code among
 * 	other classes.
*/

class AMeteria
{
	protected:
		std::string	m_type;

	public:
		/* Default Constructor */
		AMeteria( void ) ;

		/* Parameterized Constructor */
		AMeteria( const std::string &type ) ;

		/* Destructor */
		~AMeteria( void ) ;

		/* Copy Constructor */
		AMeteria( const AMeteria &copy) ;

		/* Assignment overload operator */
		AMeteria&	operator=( const AMeteria &copy ) ;


		/* Getters & Setters */
		const std::string	&getType( void ) const ;
		void			setType( std::string const type ) ;


		/* Member Functions */
		virtual AMaterial	*clone( void ) const = 0 ;
		virtual void		use(ICharacter &target) ;
};
