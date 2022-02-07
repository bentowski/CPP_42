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
    void setIdeas();
    void setIdeas(int index, std::string value);
    void printIdeas(int index);
  private:
    std::string _ideas[100];
};

#endif
