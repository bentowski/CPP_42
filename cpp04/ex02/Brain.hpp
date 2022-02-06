#ifndef BRAIN_H
# define BRAIN_H
# include "Animal.hpp"

class Brain
{
  public:
    Brain();
    ~Brain();
  private:
    std::string ideas[100];
    Brain(Brain & src);
    Brain& operator=(Brain const & src);
};

#endif
