#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "AMeteria.hpp"
#include "ICharacter.hpp"

class Cure : public AMeteria
{
	public:
		/* Default Constructor */
		Cure( void ) ;

		/* Destructor */	
		~Cure( void ) ;

		/* Parameterized Constructor */	
		//Cure( std::string name ) ;

		/* Copy Constructor */
		Cure( const Cure &copy) ;

		/* Assignment Copy operator overload */
		Cure&	operator=( const Cure &copy ) ;


		/* Member Functions */
		virtual	AMateria *clonse() const ;
		virtual	void	use(ICharacter &target) ; 

	
		/* Getters & Setters */
		const std::string	&getType( void ) const ;
		void			setType( std::string type ) ;

};


#endif
