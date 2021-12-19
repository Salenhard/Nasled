#pragma once

// ����� �������� ��������� ���-20

#include "Employee.h"
#include "String"

enum Levels;  													// ������ ������������
enum Languages;			
// ����� ����������������
// ����� �����������
class Programmer: public Employee
{
private:
	Levels level;													// �������� (junior, middle ,senior)
	Languages language;												// ���� ���������������� �� ������� ����� (c++, java)

public:
	void set_level(Levels new_level);							// ������������� ������� ������������	
	void set_language(Languages new_language);				// ������������� ���� ����������������
	Levels get_level() const;									// ��������� ������� ������������
	Languages get_language() const;								// ��������� ���� ���������������� 
	Programmer();													// ����������� �� ���������
	Programmer(const Levels new_level, const Languages new_language, int new_wage, int new_employee_id, int new_experience, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, int new_day, int new_month, int new_year);		// ����������� � �����������
	void set_props(const Levels new_level, const Languages new_language, int new_wage, int new_employee_id, int new_experience, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, int new_day, int new_month, int new_year);	// ������������� ��� ���������
	std::string get_string() const;									// ��������� ��� ��������� � ���� ������
};

