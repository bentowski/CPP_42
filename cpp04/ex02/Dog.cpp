/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:39 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 17:29:54 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
  std::cout << "Dog default constructor" << std::endl;
  this->type = "Dog";
  brain = new Brain();
  return ;
}

Dog::~Dog()
{
  delete brain;
  std::cout << "Dog default destructor" << std::endl;
  return ;
}

void Dog::makeSound() const
{
  std::cout << "Wouf !" << std::endl;
  return ;
}
