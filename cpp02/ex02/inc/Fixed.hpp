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

		/* Assignment Operator */
		Fixed& operator=( const Fixed& other );

		/* Comparison */
		bool	operator>( const Fixed& other ) const;
		bool	operator<( const Fixed& other ) const;
		bool	operator<=( const Fixed& other ) const;
		bool	operator>=( const Fixed& other ) const;
		bool	operator==( const Fixed& other ) const;
		bool	operator!=( const Fixed& other ) const;

		/* Arithmetic */
		Fixed	operator+( const Fixed& other ) const;
		Fixed	operator-( const Fixed& other ) const;
		Fixed	operator*( const Fixed& other ) const;
		Fixed	operator/( const Fixed& other ) const;
		Fixed&	operator++();
		Fixed	operator++( int );
		Fixed&	operator--();
		Fixed	operator--( int );

		/* Min & Max Functions */

		static const Fixed&	min( Fixed const &a, Fixed const &b );
		static Fixed&		min( Fixed &a, Fixed &b );

		static const Fixed&	max( Fixed const &a, Fixed const &b );
		static Fixed&		max( Fixed &a, Fixed &b );

		/* Destructor */
		~Fixed( void );

		/* Member Functions */
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
