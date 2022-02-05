/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:29 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/05 15:39:17 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _sound("...")
{
  std::cout << "Animal default constructor" << std::endl;
  return ;
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
