/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:44 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/31 11:59:39 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
  int x = 4;
  int y = 0;
  Animal* meta[x];
  while (y < x / 2)
  {
    meta[y] = new Dog();
    y++;
  }
  while (y < x)
  {
    meta[y] = new Cat();
    y++;
  }

  y = 0;
  while (y < x)
  {
	  std::cout << meta[y]->getType() << " " << std::endl;
	  meta[y]->makeSound();
	  y++;
  }

  y = 0;
  while (y < x)
  {
	  delete meta[y];
	  y++;
  }
  return 0;
}
