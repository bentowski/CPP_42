/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:34 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/07 20:24:26 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal()
{
  std::cout << "Cat default constructor" << std::endl;
  this->type = "Cat";
  _brain = new Brain();
  return ;
}

Cat::Cat( Cat & src ) : Animal()
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = src;
	return;
}

Cat::~Cat()
{
  delete _brain;
  std::cout << "Cat default destructor" << std::endl;
  return ;
}

void Cat::makeSound() const
{
  std::cout << "Miaouuuu" << std::endl;
  return ;
}

Cat & Cat::operator= (const Cat & src )
{

	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &src)
	{
    this->type = src.type;
    *this->_brain = *src._brain;
	}
	return *this;
}
