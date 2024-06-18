#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed( void );
		Fixed( const Fixed& other );
		Fixed ( const int para ) ;
		Fixed ( const float para );
		Fixed& operator=( const Fixed& other );
		~Fixed();

		int	getRawBits( void ) const;
		void	setRawBits( const int raw );

		int		toInt( void ) const;
		float		toFloat( void ) const;

	private:
		int			_value;
		static const int	_fractionalBits = 8;

};
std::ostream	&operator<<( std::ostream &op, Fixed const &f );

#endif
