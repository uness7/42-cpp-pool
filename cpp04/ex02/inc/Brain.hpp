#pragma once

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string	m_ideas[100];

	public:
		/* Default Constructor */
		Brain( void );

		/* Destructor */	
		~Brain( void );

		/* Parameterized Constructor */	
		Brain( std::string name ) ;

		/* Copy Constructor */
		Brain( const Brain &copy) ;

		/* Assignment Copy operator overload */
		Brain&	operator=( const Brain &copy ) ;

		/* Getter & setters */
		std::string	getIdea( int index ) const ;
		void		setIdea( int index, std::string const &idea ) ; 
};
