#ifndef ARRAY_H
# define ARRAY_H
# include <iostream>

template<typename T>
class Array
{
  public:
    Array();
    Array(unsigned int n);
    Array(Array const & src);
    virtual ~Array();
    Array& operator=(Array const & src);
    T& operator[](unsigned int i);
    T const & operator[](unsigned int i) const;
    unsigned int size() const;
    void setArray(unsigned int i, T element);

    class 			Out : public std::exception {
              		public:
              			const char * what() const throw() { return "Index is out of limits"; }
                };
  private:
    T* _array;
    unsigned int _size;
};

template<typename T>
std::ostream&	operator<<(std::ostream& stream, Array<T> const& rhs);

#endif
