/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:34 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/05 19:02:04 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): _sound("Miaouuu")
{
  std::cout << "Cat default constructor" << std::endl;
  this->type = "Cat";
  return ;
}

Cat::~Cat()
{
  std::cout << "Cat default destructor" << std::endl;
  return ;
}

void Cat::makeSound() const
{
  std::cout << "Miaouuuu" << std::endl;
  return ;
}
