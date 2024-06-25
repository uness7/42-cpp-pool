#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int		_hitPoints;
		unsigned int		_energyPoints;
		unsigned int		_attackDamage;

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
		void	setHitPoinst( unsigned int x ) ;
		void	setEnergyPoints( unsigned int x ) ;
		void	setAttackDamage( unsigned int x ) ;

		/* Getters */
		std::string	getName( void ) const ;
		unsigned int		getHitPoints( void ) const ;
		unsigned int		getEnergyPoints( void ) const ;
		unsigned int		getAttackDamage( void ) const ;

};

#endif
