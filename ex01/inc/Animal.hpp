#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

/* Animal class is abstract */
class Animal
{
	protected:
		std::string	m_type;

	public:
		/* Default Constructor */
		Animal( void );

		/* Constructor  with args */
		Animal( std::string type );

		/* Destructor */	
		virtual ~Animal( void );

		/* Copy Constructor */
		Animal( const Animal &copy) ;

		/* Assignment Copy operator overload */
		Animal&	operator=( const Animal &copy ) ;

		/* Getter & Setter */
		std::string	getType( void ) const ;
		void		setType( const std::string type) ;

		/* Pure Virtual Member Function */
		virtual void		makeSound( void ) const = 0;
};

#endif // ANIMAL_HPP
