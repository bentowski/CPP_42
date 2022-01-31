#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat created("Mike", 148);
		std::cout << created.getName() << " is grade " << created.getGrade() << std::endl;
		Bureaucrat error("Bob", 0);
		std::cout << error.getName() << " is grade " << error.getGrade() << std::endl;
		Bureaucrat noCreated("Marcel", 12);
		std::cout << noCreated.getName() << " is grade " << noCreated.getGrade() << std::endl;
	}
	catch (std::exception e)
	{
		std::cout << "The bureaucrat's grade must be beetween 1 and 150 only" << std::endl;
	}
}
