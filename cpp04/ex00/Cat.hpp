#ifndef CAT_H
# define CAT_H
# include "Animal.hpp"

class Cat: public Animal
{
  public:
    Cat();
    ~Cat();
  private:
    Cat(Cat & src);
    int& operator=(Cat const & src);
};

#endif
