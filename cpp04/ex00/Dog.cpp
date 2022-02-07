/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:39 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/07 20:30:31 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
  std::cout << "Dog default constructor" << std::endl;
  this->type = "Dog";
  return ;
}

Dog::Dog( Dog & src ) : Animal()
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = src;
	return;
}

Dog::~Dog()
{
  std::cout << "Dog default destructor" << std::endl;
  return ;
}

void Dog::makeSound() const
{
  std::cout << "Wouf !" << std::endl;
  return ;
}

Dog & Dog::operator= (const Dog & src )
{

	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &src)
	{
    this->type = src.type;
	}
	return *this;
}
