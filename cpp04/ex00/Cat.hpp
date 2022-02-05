/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:36 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/05 19:01:54 by bbaudry          ###   ########.fr       */
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
    void makeSound() const;
  private:
    Cat(Cat & src);
	std::string _sound;
    int& operator=(Cat const & src);
};

#endif
