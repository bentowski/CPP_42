/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:36 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/07 20:29:55 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include "Animal.hpp"

class Cat: public Animal
{
  public:
    Cat();
    ~Cat();
  	Cat(Cat & src);
  	Cat& operator=(Cat const & src);
    void makeSound() const;
};

#endif
