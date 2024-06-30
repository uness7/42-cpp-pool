#ifndef ICE_HPP
#define ICE_HPP

class Ice
{
	public:
		/* Default Constructor */
		Ice( void ) ;

		/* Destructor */	
		~Ice( void ) ;

		/* Constructor */	
		Ice( std::string name ) ;

		/* Copy Constructor */
		Ice( const Ice &copy) ;

		/* Assignment Copy operator overload */
		Ice&	operator=( const Ice &copy ) ;

	private:

};

#endif // ICE_HPP
