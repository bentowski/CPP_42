/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:34 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/07 11:24:12 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
  std::cout << "WrongCat default constructor" << std::endl;
  this->type = "WrongCat";
  return ;
}

WrongCat::~WrongCat()
{
  std::cout << "WrongCat default destructor" << std::endl;
  return ;
}
