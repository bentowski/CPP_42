/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:59:13 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 15:59:13 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void )
{
	return ;
}

Karen::~Karen( void )
{
	return ;
}

void Karen::complain(std::string level)
{
	void (Karen::*f[1000])( void );
	char c[4];
	int x;

	c[0] = 'D';
	c[1] = 'I';
	c[2] = 'W';
	c[3] = 'E';
	f[(int)'D'] = &Karen::debug;
	f[(int)'I'] = &Karen::info;
	f[(int)'W'] = &Karen::warning;
	f[(int)'E'] = &Karen::error;
	x = 0;
	if (level == "DEBUG" || level == "INFO" || level == "WARNING" || level == "ERROR")
	{
		while (c[x] != level[0])
			x++;
		while (x < 4)
			(this->*f[(int)c[x++]])();
	}
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return ;
}

void Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
	return ;
}

void Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
	return ;
}

void Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
	return ;
}

void Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}
