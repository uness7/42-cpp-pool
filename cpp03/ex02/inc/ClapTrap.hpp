#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string	_name;
		int		_hitPoints;
		int		_energyPoints;
		int		_attackDamage;

	public:
		/* Default Constructor */
		ClapTrap( void );

		/* Constructor  */
		ClapTrap( std::string name );

		/* Destructor */
		~ClapTrap( void );

		/* Copy Constructor */
		ClapTrap( ClapTrap const &other );

		/* Assignment overload operator */
		ClapTrap&	operator=( ClapTrap const &copy );


		/* Member Functions */
		void	attack( const std::string& target );
		void 	takeDamage( unsigned int amount );
		void 	beRepaired( unsigned int amount );

		/* Setters */
		void	setName( std::string name ) ;
		void	setHitPoinst( int x ) ;
		void	setEnergyPoints( int x ) ;
		void	setAttackDamage( int x ) ;

		/* Getters */
		std::string	getName( void ) const ;
		int		getHitPoints( void ) const ;
		int		getEnergyPoints( void ) const ;
		int		getAttackDamage( void ) const ;

};

#endif // CLAPTRAP_HPP
