// ConsoleApplication13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
class DateClass
{
	//Публичные или общедоступные методы
public:
	//Параметры
	int m_day;
	int m_month;
	int m_year;
	//Конструктор
	DateClass()
	{
		std::cout << "DateClass().{" << std::endl;
		this->m_day = 0;
		this->m_month = 0;
		this->m_year = 0;
		std::cout << "DateClass().}" << std::endl;
	}
	//деструктор объекта
	~DateClass()
	{
		std::cout << "~DateClass().{" << std::endl;
		//В деструкторе высвобождаетет только указалеи внутриобъекта
		//, которые сами же и на добавляли внутрь объекта как ешго параметры
		std::cout << "~DateClass().}" << std::endl;
	}
	//метод
	virtual void WriteThis()
	{
		;
		std::cout << ".m_day=" << this->m_day << std::endl;
		std::cout << ".m_month=" << this->m_month << std::endl;
		std::cout << ".m_year=" << this->m_year << std::endl;
	}
}​​​​;
class DateClass2 : public DateClass 
{
public:
	DateClass2()
	{
		std::cout << "DateClass2().{" << std::endl;
		std::cout << "DateClass2().}" << std::endl;
	}
	//DateClass _DateClass = DateClass();
	//деструктор объекта
	~DateClass2()
	{
		std::cout << "~DateClass2().{" << std::endl;
		//В деструкторе высвобождаетет только указалеи внутриобъекта
		//, которые сами же и на добавляли внутрь объекта как ешго параметры
		std::cout << "~DateClass2().}" << std::endl;
	}
	void WriteThis() override
	{std::cout << "!!!" << std::endl;}
};
int main()
{
	DateClass _DateClass = DateClass();
	_DateClass.WriteThis();
	_DateClass.~DateClass();
	
	DateClass2 _DateClass2 = DateClass2();
	_DateClass2.WriteThis();
	(static_cast<DateClass>(_DateClass2)).WriteThis();
	_DateClass2.~DateClass2();
	int q = 0;
	std::cout << q;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
