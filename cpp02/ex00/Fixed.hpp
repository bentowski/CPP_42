#ifndef FIXED_H
# define FIXED_H
# include <iostream>

class Fixed {
	public:
		Fixed ( void );
		Fixed ( Fixed const & src);
		~Fixed ( void );

		int& operator=(Fixed const & src);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	private:
		int _n;
		static const int _b = 8;
};

#endif
