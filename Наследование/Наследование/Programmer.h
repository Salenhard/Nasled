#pragma once

// Автор Гурбатов Владислав ИВТ-20

#include "Employee.h"
#include "String"

enum Levels;  													// уровни программиста
enum Languages;			
// языки программирования
// Класс программист
class Programmer: public Employee
{
private:
	Levels level;													// градация (junior, middle ,senior)
	Languages language;												// язык программирования на котором пишет (c++, java)

public:
	void set_level(Levels new_level);							// устанавливает уровень программиста	
	void set_language(Languages new_language);				// устанавливает язык программирования
	Levels get_level() const;									// возращает уровень программиста
	Languages get_language() const;								// возращает язык программирования 
	Programmer();													// конструктор по умолчанию
	Programmer(const Levels new_level, const Languages new_language, int new_wage, int new_employee_id, int new_experience, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, int new_day, int new_month, int new_year);		// конструктор с параметрами
	void set_props(const Levels new_level, const Languages new_language, int new_wage, int new_employee_id, int new_experience, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, int new_day, int new_month, int new_year);	// устанавливает все параметры
	std::string get_string() const;									// возращает все параметры в виде строки
};

