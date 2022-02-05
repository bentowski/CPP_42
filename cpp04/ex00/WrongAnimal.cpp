/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:29 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/05 15:27:36 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
  std::cout << "WrongAnimal default constructor" << std::endl;
  return ;
}

WrongAnimal::~WrongAnimal()
{
  std::cout << "WrongAnimal default destructor" << std::endl;
  return ;
}

void WrongAnimal::makeSound() const
{
  std::cout << "..." << std::endl;
  return ;
}

std::string WrongAnimal::getType() const
{
  return (this->type);
}
