﻿// ConsoleApplication15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


class IAnimal
{
public:
    virtual std::string getName()=0;
    virtual std::string speak() = 0;
};

class Dragonfly : public IAnimal
{
protected:
    std::string m_name;
public:
    Dragonfly(std::string name)
    {
        m_name = name;
    }
    //Метод уже не является пустышкой
    virtual std::string getName() // этот класс уже не является абстрактным, так как мы переопределили функцию speak()
    {
        return m_name;
    }
    virtual std::string speak() // этот класс уже не является абстрактным, так как мы переопределили функцию speak()
    {
        return "buzz";
    }
};

int main()
{
    Dragonfly dfly("Barbara");
    std::cout << dfly.getName() << " says " << dfly.speak() << '\n';
    std::cout << "Hello World!\n";

    IAnimal& _IAnimal = dfly;
    std::cout << _IAnimal.getName() << " says " << _IAnimal.speak() << '\n';

    int q = 0;
    std::cin >>q;
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
