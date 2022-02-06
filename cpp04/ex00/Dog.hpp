/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:42 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/06 18:34:37 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
# include "Animal.hpp"

class Dog: public Animal
{
  public:
    Dog();
    ~Dog();
    void makeSound() const;
  private:
    Dog(Dog & src);
	  std::string _sound;
    Dog& operator=(Dog const & src);
};

#endif
