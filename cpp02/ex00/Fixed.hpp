#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		/* Default Constructor */
		Fixed( void );

		/* Copy constructor */
		Fixed( const Fixed& other );

		/* Overload operator */
		Fixed& operator=( const Fixed& other );

		/* Deconstructor */
		~Fixed();

		/* Member Functions */
		int	getRawBits( void ) const;
		void	setRawBits( const int raw );

	private:
		int			_value;
		static const int	_fractionalBits = 8;

};

#endif
