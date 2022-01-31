/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:44 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 17:54:50 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
  int x = 4;
  int y = 0;
  Animal* meta = new Animal[x];
  while (y < x / 2)
  {
    meta[y] = new Dog();
    std::cout << meta[y].getType() << " " << std::endl;
    meta[y].makeSound();
    y++;
  }
  while (y < x)
  {
    const Cat meta[y] = new Cat();
    std::cout << meta[y].getType() << " " << std::endl;
    meta[y].makeSound(); //will output the cat sound!
    y++;
  }

  delete [] meta;
  return 0;
}
