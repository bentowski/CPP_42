#include <cctype>
#include <cstring>
#include <iostream>
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
  int bufnumber;
  std::string buf;

  std::cout << std::endl;
  std::cout << "Enter a command please" << std::endl;
  std::cin >> buf;
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
      std::cout << "wich contact want you see ? Enter a number" << std::endl;
      std::cin >> bufnumber;
      while (bufnumber > x || bufnumber < 1)
      {
        std::cout << "the contact selected not exist, select an other contact please" << std::endl;
        std::cin >> bufnumber;
      }
      this->list[bufnumber - 1].printAll();
    }
    else
    {
      std::cout << "No contact yet" << std::endl;
    }
  }
  return (0);
}
