#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed( void );
		Fixed( const Fixed& other );
		Fixed& operator=( const Fixed& other );
		~Fixed();

		int	getRawBits( void ) const;
		void	setRawBits( const int raw );

	private:
		int			_value;
		static const int	_fractionalBits = 8;

};

#endif
