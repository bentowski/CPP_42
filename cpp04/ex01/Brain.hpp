#ifndef BRAIN_H
# define BRAIN_H
# include "Animal.hpp"

class Brain
{
  public:
    Brain();
  	Brain(Brain & src);
    ~Brain();
  	Brain& operator=(Brain const & src);
  private:
    std::string ideas[100];
};

#endif
