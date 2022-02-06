#include "Convert.hpp"
#include <limits>

// ================= Constructors/Destructors =============

Convert::Convert(char *str):
_str(str), _input(std::atof(str))
{
  setType();
  return;
}

Convert::~Convert()
{
  return;
}

// =================== Utils ================

void  trim_spaces( std::string & str ) {

	while (std::isspace(str[0]))
		if (str.length() > 1) { str.erase(0, 1); } else { break ; }
	while (std::isspace(str[str.length() - 1]))
		if (str.length() > 1) { str.erase(str.length() - 1, 1); } else { break ; }
}

bool    is_inf_or_nan( std::string str ) {
	return (!str.compare("+inf") || !str.compare("-inf") || !str.compare("inf") ||
		!str.compare("+inff") || !str.compare("-inff") || !str.compare("inff") ||
		!str.compare("+nan") || !str.compare("-nan") || !str.compare("nan") ||
		!str.compare("+nanf") || !str.compare("-nanf") || !str.compare("nanf"));
}

bool	is_digit( std::string str ) {

	std::string	front_chars = "+-0123456789.";
	std::string	mid_chars = "0123456789.";
	std::string	back_chars = "0123456789f";

	if (front_chars.find(str[0]) == str.npos)
		return false;
	for (unsigned long i = 1; i < str.length() - 1; i++)
		if (mid_chars.find(str[i]) == str.npos)
			return false;
	if (back_chars.find(str[str.length() - 1]) == str.npos)
		return false;
	return true;
}

bool	is_null( std::string str ) {

	std::string	front_chars = "+-0.";
	std::string	mid_chars = "0.";
	std::string	back_chars = "0f";

	if (front_chars.find(str[0]) == str.npos)
		return false;
	for (unsigned long i = 1; i < str.length() - 1; i++)
		if (mid_chars.find(str[i]) == str.npos)
			return false;
	if (back_chars.find(str[str.length() - 1]) == str.npos)
		return false;
	return true;
}


// ================ Members functions ===============

bool	Convert::checkFormat( void ) {

	return (!is_digit(_str) ||
		(_str.find('.') != _str.npos && _str.find('.') != _str.rfind('.')) ||
		(_str.find('+') != _str.npos && _str.rfind('+') != 0) ||
		(_str.find('-') != _str.npos && _str.rfind('-') != 0) ||
		(_str.find('f') != _str.npos && _str.find('f') != _str.length() - 1) ||
		(!_input && !is_null(_str)));
}

void	Convert::setType( void ) {

	trim_spaces(_str);
	if (_str.length() == 1 && !isdigit(_str[0]))
	{
		_type = CHAR1;
		return ;
	}
	if (!is_inf_or_nan(_str) && this->checkFormat())
	{
		_type = NA;
		return ;
	}
	_type = DBL;
	if (!is_inf_or_nan(_str) && (_input < -std::numeric_limits<double>::max() - 1 || _input > std::numeric_limits<double>::max()))
	{
		_type = NA;
		return ;
	}
	if (!is_inf_or_nan(_str) && (_input < -std::numeric_limits<float>::max() - 1 || _input > std::numeric_limits<float>::max()))
		_type = DBL;
	else
		_type = FLOAT;
	if (_input >= -2147483648 && _input <= 2147483647)
		_type = INT;
	if (_input >= -128 && _input <= 127)
		_type = CHAR3;
	if (_input >= 32 && _input < 126)
		_type = CHAR2;
}

void	Convert::printChar( std::ostream& stream ) const {

	if (_type > CHAR3)
		stream << "char: impossible" << std::endl;
	else if (_type > CHAR2)
		stream << "char: Non displayable" << std::endl;
	else if (_type > CHAR1)
		stream << "char: '" << static_cast<char>(this->_input) << "'" << std::endl;
	else
		stream << "char: '" << _str[0] << "'" << std::endl;
}

void	Convert::printInt( std::ostream& stream ) const {

	if (_type > INT)
		stream << "int: impossible" << std::endl;
	else if (_type == CHAR1)
		stream << "int: " << static_cast<int>(this->_str[0]) << std::endl;
	else
		stream << "int: " << static_cast<int>(this->_input) << std::endl;

}

void	Convert::printDouble( std::ostream& stream ) const {

	if (_type > DBL)
		stream << "double: impossible" << std::endl;
	else if (_type == CHAR1)
		stream << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(this->_str[0]) << std::endl;
	else if (_input >= 1e+06 || _input <= -1e+06)
		stream << "double: " << std::scientific << std::setprecision(1) << static_cast<double>(this->_input) << std::endl;
	else
		stream << "double: " << std::fixed << std::setprecision(1) << this->_input << std::endl;
}

void	Convert::printFloat( std::ostream& stream ) const {

	if (_type > FLOAT)
		stream << "float: impossible" << std::endl;
	else if (_type == CHAR1)
		stream << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(this->_str[0]) << "f" << std::endl;
	else
		stream << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(this->_input) << "f" << std::endl;
}

// ==================== Overloads ===================

std::ostream&	operator<<( std::ostream& stream, Convert const& rhs) {
	rhs.printChar(stream);
	rhs.printInt(stream);
	rhs.printFloat(stream);
	rhs.printDouble(stream);
	return stream;
}
