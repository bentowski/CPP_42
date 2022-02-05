/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:39 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/05 15:39:54 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _sound("Wouf !")
{
  std::cout << "Dog default constructor" << std::endl;
  this->type = "Dog";
  return ;
}

Dog::~Dog()
{
  std::cout << "Dog default destructor" << std::endl;
  return ;
}

// void Dog::makeSound() const
// {
//   std::cout << "Wouf !" << std::endl;
//   return ;
// }
