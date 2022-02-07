/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:29 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/07 22:47:40 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _sound("...")
{
  std::cout << "Animal default constructor" << std::endl;
  return ;
}

Animal::Animal( Animal & src )
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = src;
	return;
}


Animal::~Animal()
{
  std::cout << "Animal default destructor" << std::endl;
  return ;
}

void Animal::makeSound() const
{
  std::cout << this->_sound << std::endl;
  return ;
}

std::string Animal::getType() const
{
  return (this->type);
}

Animal & Animal::operator= (const Animal & src )
{

	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &src)
	{
    this->type = src.type;
	}
	return *this;
}
