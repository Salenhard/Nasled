#include <iostream>
#include "Programmer.h"

int main()
{
	setlocale(0, "RU");
	Employee s3;
	Human s2;
	Programmer s1;
	try {
		s1.set_date_of_birth(2,3,200);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	s1.set_secondname("Salen");
	std::cout << "�����������: \n" << s1.get_string() << std::endl;
	std::cout << "�������: \n" << s2.get_string() << std::endl;
	std::cout << "�������: \n" << s3.get_string() << std::endl;
}
