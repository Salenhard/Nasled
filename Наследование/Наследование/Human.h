#pragma once
#include "Date_of_birth.h"
#include<string>
//����� �������� ��������� ���-20
//����� �������
class Human 
{
private:
	std::string name;
	std::string secondname;
	std::string lastname;
public:
	Date date_of_birth;
	void set_name(const std::string &new_name);						// ������������� ���
	void set_secondname(const std::string &new_secondname);			// ������������� ��������
	void set_lastname(const std::string& new_lastname);				// ������������� �������
	void set_date_of_birth(int new_day, int new_month, int new_year);					// ������������� ���� ��������
	std::string get_name() const;									// ��������� ���
	std::string get_secondname() const;								// ��������� ��������
	std::string get_lastname() const;								// ��������� �������
	Date get_date_of_birth() const;									// ��������� ���� ��������

	Human();														// ����������� �� ���������
	Human(const std::string &new_name, const std::string &new_secondname, const std::string &new_lastname, int new_day, int new_month, int new_year);		// ����������� � �����������
	void set_props(const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, int new_day, int new_month, int new_year);		// ������������ ��� ���� ������
	std::string get_string();										// ��������� ��� ���� � ������
};

