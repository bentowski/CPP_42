/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:42 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/07 22:37:32 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
  public:
    Dog();
    ~Dog();
  	Dog(Dog & src);
  	Dog& operator=(Dog const & src);
    Brain* getBrainAdress();
    void makeSound() const;
    void setBrain();
    void setBrain(int index, std::string value);
    void getBrain();
    void getBrain(int index);
  private:
    Brain* _brain;
};

#endif
