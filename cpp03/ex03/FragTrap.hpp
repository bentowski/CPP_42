#ifndef FragTRAP_H
# define FragTRAP_H
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
  public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    void guardGate();
    void attack( const std::string& target);
    void highFiveGuys();
  private:
    FragTrap(FragTrap & src);
    int& operator=(FragTrap const & src);
};

#endif
