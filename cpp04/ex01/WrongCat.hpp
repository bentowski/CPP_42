/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:36 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/05 15:36:44 by bbaudry          ###   ########.fr       */
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
    int& operator=(WrongCat const & src);
};

#endif
