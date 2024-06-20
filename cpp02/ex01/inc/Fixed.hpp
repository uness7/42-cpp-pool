#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		/* Default Constructor */
		Fixed( void );

		/* Copy Constructor */
		Fixed( const Fixed& other );

		/* Constructors */
		Fixed ( const int para ) ;
		Fixed ( const float para );

		/* Assignment Operator */
		Fixed& operator=( const Fixed& other );

		/* Destructor */
		~Fixed();

		/* Setter & Getters */
		int	getRawBits( void ) const;
		void	setRawBits( const int raw );

		/* Member functions */
		int		toInt( void ) const;
		float		toFloat( void ) const;

	private:
		int			_value;
		static const int	_fractionalBits = 8;

};

std::ostream	&operator<<( std::ostream &op, Fixed const &f );

#endif
