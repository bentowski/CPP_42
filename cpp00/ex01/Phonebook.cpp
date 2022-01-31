/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:56:44 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/31 17:45:16 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstring>
#include <iostream>
#include <numeric>
#include <iterator>
#include "./Phonebook.hpp"

Phonebook::Phonebook()
{
	return ;
}

Phonebook::~Phonebook()
{
	return ;
}

int Phonebook::listen()
{
  int x;
  std::string buf;

  std::cout << std::endl;
  std::cout << "Enter a command please" << std::endl;
  std::getline(std::cin, buf);
  if (buf == "EXIT")
    return (1);
  else if (buf == "ADD")
  {
    x = 0;
    while (this->list[x].isExist() && x < 8)
    {
      x++;
    }
    if (x < 8)
      this->list[x].addContact(x);
    else
      std::cout << "Phonebook is full sorry" << std::endl;
  }
  else if (buf == "SEARCH")
  {
    x = 0;
    if (this->list[x].isExist())
    {
      while (this->list[x].isExist() && x < 8)
      {
        this->list[x].printList(x + 1);
        x++;
      }
      std::cout << "wich contact want you to see ? Enter a number" << std::endl;
      std::getline(std::cin, buf);
      while (buf[1] && (buf[0] < '0' || buf[0] > '9'))
      {
        std::cout << "the contact selected not exist, select an other contact please" << std::endl;
		std::getline(std::cin, buf);
      }
      this->list[buf[0] - 49].printAll();
    }
    else
    {
      std::cout << "No contact yet" << std::endl;
    }
  }
  return (0);
}
