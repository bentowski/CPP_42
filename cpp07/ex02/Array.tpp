#include "Array.hpp"

// ================= Constructors/Destructors ==========

template<typename T>
Array<T>::Array() : _array(new T[0]), _size(0)
{
  return ;
}

template<typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
  return ;
}

template<typename T>
Array<T>::Array(Array const & src)
{
  this->_size = src.size();
		this->_array = new T[src.size()];
		for (unsigned int i = 0; i < this->size(); i++ )
			this->_array[i] = src[i];
}

template<typename T>
Array<T>::~Array()
{
  delete [] this->_array;
  return ;
}

// ================= Members functions ==========

template<typename T>
void			Array<T>::setArray( unsigned int i, T element ) {

	this->_array[i] = element;
}

template<typename T>
unsigned int	Array<T>::size( void ) const {

	return this->_size;
}

// =================== Overloads =============

template<typename T>
Array<T> & 	Array<T>::operator=( Array<T> const & src ) {

	if (this != &src)
	{
		delete [] this->_array;
		this->_size = src.size();
		this->_array = new T[src.size()];
		for (unsigned int i = 0; i < this->size(); i++ )
			this->_array[i] = src[i];
	}
	return *this;
}

template<typename T>
T &			Array<T>::operator[]( unsigned int i ) {

	if (i >= this->size())
		throw Array<T>::Out();
	return this->_array[i];
}

template<typename T>
T const &	Array<T>::operator[]( unsigned int i ) const {

	if (i >= this->size())
		throw Array<T>::Out();
	return this->_array[i];
}

template<typename T>
std::ostream&	operator<<(std::ostream& stream, Array<T> & rhs)
{
	if (!rhs.size())
		stream << "(null)" << std::endl;
	for (unsigned int i = 0; i < rhs.size(); i++)
		stream << "[" << i << "]: " << rhs[i] << std::endl;
	return (stream);
}
