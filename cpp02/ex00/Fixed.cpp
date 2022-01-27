#include "Fixed.hpp"

Fixed::Fixed( void )
{
	this->_n = 0;
	std::cout << "Default constructor called" << std::endl;
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

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_n;
}

void Fixed::setRawBits( int const raw )
{
	this->_n = raw;
}
