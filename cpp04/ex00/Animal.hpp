#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>

class Animal
{
  public:
    Animal();
    std::string getType() const;
    ~Animal();
  protected:
    std::string type = "undefined";
  private:
    Animal(Animal & src);
    int& operator=(Animal const & src);

};

#endif
