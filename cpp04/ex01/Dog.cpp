/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:39 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/07 10:54:33 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
  std::cout << "Dog default constructor" << std::endl;
  this->type = "Dog";
  _brain = new Brain();
  return ;
}

Dog::Dog( Dog & src )
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = src;
	return;
}

Dog::~Dog()
{
  delete _brain;
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
		this->_brain = new Brain(*src._brain);
	}
	return *this;
}
