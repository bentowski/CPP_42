/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:42 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/07 20:29:54 by bbaudry          ###   ########.fr       */
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
  	Dog(Dog & src);
  	Dog& operator=(Dog const & src);
    void makeSound() const;
};

#endif
