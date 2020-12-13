// ConsoleApplication12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
class DateClass
{
public:
	int m_day;
	int m_month;
	int m_year;
	DateClass()
	{
		this->m_day = 0;
		this->m_month = 0;
		this->m_year = 0;
	}
	void WriteThis()
	{
		;
		std::cout << ".m_day=" << this->m_day << std::endl;
		std::cout << ".m_month=" << this->m_month << std::endl;
		std::cout << ".m_year=" << this->m_year << std::endl;
	}
}​​​​;




int main()
{
	DateClass _DateClass = DateClass();
	_DateClass.WriteThis();
	int q = 0;
	std::cout << q;
}​​​​