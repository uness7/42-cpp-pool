#pragma once

class AMeteria
{
	protected:
		
	public:
		/* Canonical Form Members */
		AMeteria( void ) ;

		AMeteria( const std::string &type ) ;

		~AMeteria( void ) ;

		AMeteria( const AMeteria &copy) ;

		AMeteria&	operator=( const AMeteria &copy ) ;

		
		/* Member Functions */
		virtual AMaterial	*clone() const = 0 ;
		virtual void		use(ICharacter &target) ;
};
