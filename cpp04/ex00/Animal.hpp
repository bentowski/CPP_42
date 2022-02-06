/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:31 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/06 18:34:23 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>

class Animal
{
  public:
    Animal();
    std::string getType() const;
    virtual void makeSound() const;
    virtual ~Animal();
  protected:
    std::string type;
  private:
    Animal(Animal & src);
	  std::string _sound;
    Animal& operator=(Animal const & src);
};

#endif
