/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:31 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/03 16:44:23 by bbaudry          ###   ########.fr       */
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
    virtual void makeSound() const = 0;
    virtual ~Animal();
  protected:
    std::string type;
  private:
    int& operator=(Animal const & src);
    Animal(Animal & src);
};

#endif
