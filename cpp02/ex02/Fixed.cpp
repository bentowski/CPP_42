#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed( void )
{
	this->_n = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const src)
{
	this->_n = src * pow(2, this->_b);
	return ;
}

Fixed::Fixed( float const src)
{
	this->_n = (int)(src * pow(2, this->_b));
	return ;
}

Fixed::Fixed( Fixed const & src)
{
	this->_n = src.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int& Fixed::operator=(Fixed const & src)
{
	this->_n = src.getRawBits();
	return (this->_n);
}

int& Fixed::operator+(Fixed const & src)
{
	return (this->_n + src.getRawBits());
}

int& Fixed::operator-(Fixed const & src)
{
	return (this->_n - src.getRawBits());
}

int& Fixed::operator*(Fixed const & src)
{
	return (this->_n * src.getRawBits());
}

int& Fixed::operator/(Fixed const & src)
{
	return (this->_n / src.getRawBits());
}

bool Fixed::operator>( Fixed const & src) const
{
	if (this->_n > src.getRawBits())
		return (0);
	else
		return (1);
}

bool Fixed::operator<( Fixed const & src) const
{
	if (this->_n < src.getRawBits())
		return (0);
	else
		return (1);
}

bool Fixed::operator>=( Fixed const & src) const
{
	if (this->_n >= src.getRawBits())
		return (0);
	else
		return (1);
}

bool Fixed::operator<=( Fixed const & src) const
{
	if (this->_n <= src.getRawBits())
		return (0);
	else
		return (1);
}

bool Fixed::operator==( Fixed const & src) const
{
	if (this->_n == src.getRawBits())
		return (0);
	else
		return (1);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_n;
}

void Fixed::setRawBits( int const raw )
{
	this->_n = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)(this->_n / pow(2, this->_b)));
}

int Fixed::toInt( void ) const
{
	return (this->_n / pow(2, this->_b));
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
