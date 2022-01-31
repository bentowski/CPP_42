/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:34 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 17:29:51 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
  std::cout << "Cat default constructor" << std::endl;
  this->type = "Cat";
  brain = new Brain();
  return ;
}

Cat::~Cat()
{
  delete brain;
  std::cout << "Cat default destructor" << std::endl;
  return ;
}

void Cat::makeSound() const
{
  std::cout << "Miaouuuu" << std::endl;
  return ;
}
