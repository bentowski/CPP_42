/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:39 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/07 20:23:12 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal()
{
  std::cout << "Dog default constructor" << std::endl;
  this->type = "Dog";
  _brain = new Brain();
  return ;
}

Dog::Dog( Dog & src ) : Animal()
{
	std::cout << "Dog Copy constructor called" << std::endl;
  _brain = new Brain();
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
    this->type = src.type;
    *this->_brain = *src._brain;
	}
	return *this;
}
