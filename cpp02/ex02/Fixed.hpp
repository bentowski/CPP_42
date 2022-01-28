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
		Fixed& operator+(Fixed const & src);
		Fixed& operator-(Fixed const & src);
		Fixed& operator*(Fixed const & src);
		Fixed& operator/(Fixed const & src);
		Fixed& operator++( void );
		Fixed operator++( int );
		Fixed& operator--( void );
		Fixed operator--( int );
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
		static Fixed const & max(Fixed const & n1, Fixed const & n2);
		static Fixed const & min(Fixed const & n1, Fixed const & n2);
	private:
		int _n;
		static const int _b = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
