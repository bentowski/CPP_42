/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:29 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 18:03:35 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
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
  std::cout << "..." << std::endl;
  return ;
}

std::string Animal::getType() const
{
  return (this->type);
}
