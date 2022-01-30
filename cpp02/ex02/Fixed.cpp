/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:00:22 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 16:00:22 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

// =================== Constructor ==================

Fixed::Fixed( void )
{
	this->_n = 0;
	return ;
}

Fixed::Fixed( int const src)
{
	this->_n = src * pow(2, this->_b);
	return ;
}

Fixed::Fixed( float const src)
{
	this->_n = (int)roundf(src * pow(2, this->_b));
	return ;
}

Fixed::Fixed( Fixed const & src)
{
	this->_n = src.getRawBits();
	return ;
}

// =================== Destructor ==================

Fixed::~Fixed( void )
{
	return ;
}

// =================== Operator overload ==================

int& Fixed::operator=(Fixed const & src)
{
	this->_n = src.getRawBits();
	return (this->_n);
}

Fixed& Fixed::operator+(Fixed const & src)
{
	this->_n = (int)(roundf(this->toFloat() + src.toFloat() * pow(2, this->_b)));
	return (*this);
}

Fixed& Fixed::operator-(Fixed const & src)
{
	this->_n = (int)roundf(this->toFloat() - src.toFloat() * pow(2, this->_b));
	return (*this);
}

Fixed& Fixed::operator*(Fixed const & src)
{
	this->_n = (int)(roundf(this->toFloat() * src.toFloat() * pow(2, this->_b)));
	return (*this);
}

Fixed& Fixed::operator/(Fixed const & src)
{
	this->_n = this->_n / src.getRawBits();
	return (*this);
}

// =================== Operation increment overload ===================

Fixed& Fixed::operator++( void )
{
	_n++;
	return *this;
}

Fixed Fixed::operator++( int )
{
	Fixed tmp = *this;
	++*this;
	return tmp;
}

Fixed& Fixed::operator--( void )
{
	_n--;
	return *this;
}

Fixed Fixed::operator--( int )
{
	Fixed tmp = *this;
	--*this;
	return tmp;
}

// =================== Operator comparaison overload ==================

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

// ================= Accessors ================

int Fixed::getRawBits( void ) const
{
	return this->_n;
}

// =============== Setters ================

void Fixed::setRawBits( int const raw )
{
	this->_n = raw;
	return ;
}

float Fixed::toFloat( void ) const
{
	return ((float)(this->_n / pow(2, this->_b)));
}

int Fixed::toInt( void ) const
{
	return (this->_n / pow(2, this->_b));
}

// ================ Other ==================

Fixed const & Fixed::min(Fixed const & n1, Fixed const & n2)
{
	if (n1.getRawBits() < n2.getRawBits())
		return (n1);
	else
		return (n2);
}

Fixed const & Fixed::max(Fixed const & n1, Fixed const & n2)
{
	if (n1.getRawBits() > n2.getRawBits())
		return (n1);
	else
		return (n2);
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
