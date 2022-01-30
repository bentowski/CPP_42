#ifndef DOG_H
# define DOG_H
# include "Animal.hpp"

class Dog: public Animal
{
  public:
    Dog();
    ~Dog();
  private:
    Dog(Dog & src);
    int& operator=(Dog const & src);
};

#endif
