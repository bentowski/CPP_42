/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:36 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/06 18:33:58 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
  public:
    WrongCat();
    ~WrongCat();
    void makeSound() const;
  private:
    WrongCat(WrongCat & src);
    WrongCat& operator=(WrongCat const & src);
};

#endif
