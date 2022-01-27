#ifndef FIXED_H
# define FIXED_H
# include <iostream>

class Fixed {
	public:
		Fixed ( void );
		Fixed (int const src);
		Fixed (float const src);
		Fixed ( Fixed const & src);
		~Fixed ( void );

		int& operator=(Fixed const & src);
		int& operator+(Fixed const & src);
		int& operator-(Fixed const & src);
		int& operator*(Fixed const & src);
		int& operator/(Fixed const & src);
		bool operator>(Fixed const & src) const;
		bool operator<(Fixed const & src) const;
		bool operator>=(Fixed const & src) const;
		bool operator<=(Fixed const & src) const;
		bool operator==(Fixed const & src) const;
		bool operator!=(Fixed const & src) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt ( void ) const;
	private:
		int _n;
		static const int _b = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
