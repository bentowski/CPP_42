/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:31 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/06 18:33:52 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H
# include <iostream>

class WrongAnimal
{
  public:
    WrongAnimal();
    std::string getType() const;
    void makeSound() const;
    virtual ~WrongAnimal();
  protected:
    std::string type;
  private:
    WrongAnimal(WrongAnimal & src);
    WrongAnimal& operator=(WrongAnimal const & src);
};

#endif
