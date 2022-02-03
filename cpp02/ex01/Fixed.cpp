/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:00:09 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/03 12:40:25 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	std::cout << "Int constructor called" << std::endl;
	this->_n = src * pow(2, this->_b);
	return ;
}

Fixed::Fixed( float const src)
{
	std::cout << "Float constructor called" << std::endl;
	this->_n = (int)roundf(src * pow(2, this->_b));
	return ;
}

Fixed::Fixed( Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
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
	std::cout << "Copy assignment operator called" << std::endl;
	return (this->_n);
}

int Fixed::getRawBits( void ) const
{
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
