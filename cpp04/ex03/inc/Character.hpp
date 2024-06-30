#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class Character : public ICharacter
{
	public:
		/* Default Constructor */
		Character( void ) ;

		/* Destructor */	
		~Character( void ) ;

		/* Constructor */	
		Character( std::string name ) ;

		/* Copy Constructor */
		Character( const Character &copy) ;

		/* Assignment Copy operator overload */
		Character&	operator=( const Character &copy ) ;

};

#endif // CHARACTER_HPP
