/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:56:30 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 16:07:16 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstring>
#include <iostream>
#include "./Contact.hpp"

Contact::Contact()
{
	this->exist = 0;
	return ;
}

Contact::~Contact()
{
	return ;
}

int Contact::isExist()
{
	if (this->exist == 1)
		return (1);
	else
		return (0);
}

void Contact::addContact(int contact_number)
{
	std::string msg[5] = {"first name", "last name", "nickname", "phone number", "darkest secret"};
	std::string buf[5];
	int x;

	x = 0;
	while (x < 5)
	{
		std::cout << msg[x] << " : ";
		std::getline(std::cin, buf[x]);
		if (buf[x] != "")
			x++;
	}
	this->first_name = buf[0];
	this->last_name = buf[1];
	this->nickname = buf[2];
	this->phone_number = buf[3];
	this->darkest_secret = buf[4];
	this->exist = 1;
	std::cout << "Contact : " << contact_number + 1 <<" has been create" << std::endl;
}

void Contact::printList2(std::string to_print)
{
	int x;

	x = 0;
	std::cout << "|";
	while (to_print[x] && x < 9)
	{
		x++;
	}
	if (x < 9)
	{
		while (x < 10)
		{
			std::cout << " ";
			x++;
		}
		x = 0;
		while (to_print[x])
		{
			std::cout << to_print[x];
			x++;
		}
	}
	else
	{
		x = 0;
		while (to_print[x] && x < 9)
		{
			std::cout << to_print[x];
			x++;
		}
		if (to_print[x + 1] != 0)
		{

			std::cout << ".";
		}
		else if (to_print[x] != 0)
		std::cout << to_print[x];
	}
}

void Contact::printList(int x)
{
	int len;

	len = 0;
	while (len < 9)
	{
		std::cout << " ";
		len++;
	}
	std::cout << x;
	this->printList2(this->first_name);
	this->printList2(this->last_name);
	this->printList2(this->nickname);
	std::cout << std::endl;
}

void Contact::printAll()
{
	std::cout << "first name : " << this->first_name << std::endl;
	std::cout << "last name : " << this->last_name << std::endl;
	std::cout << "nickname : " << this->nickname << std::endl;
	std::cout << "phone number : " << this->phone_number << std::endl;
	std::cout << "darkest secret : " << this->darkest_secret << std::endl;
}
