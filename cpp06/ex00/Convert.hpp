#ifndef CONVERT_H
# define CONVERT_H
# include <iostream>
# include <iomanip>
# include <stdlib.h>

enum TYPE { CHAR1, CHAR2, CHAR3, INT, FLOAT, DBL, NA };

class Convert
{
  public:
    Convert(char *str);
    ~Convert();
    void	printFloat( std::ostream& stream ) const;
		void	printChar( std::ostream& stream ) const;
		void	printInt( std::ostream& stream ) const;
		void	printDouble( std::ostream& stream ) const;
  private:
    bool	checkFormat( void );
		void	setType( void );
    std::string _str;
    double _input;
    int _type;
    Convert& operator=(Convert const & src);
    Convert(Convert const & src);
    Convert();
};

std::ostream& operator<<(std::ostream& stream, Convert const& rhs);

#endif
