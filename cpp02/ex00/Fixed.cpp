#include "Fixed.hpp"

 /* Constructor */
Fixed::Fixed( void ) : _value(0)
{
	std::cout << "Fixed Constructor called" << std::endl;
}

/* Copy Constructor */
Fixed::Fixed(const Fixed& other) : _value(other._value)
{
	std::cout << "Copy constructor called" << std::endl;
}

/* Copy Assignment Operator */
Fixed	&Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_value = other.getRawBits();
	return *this;
}

/* Destructor */
Fixed::~Fixed()
{
	std::cout << "Fixed Destructor called" << std::endl;
}

/* Getter & Setter */
int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}
