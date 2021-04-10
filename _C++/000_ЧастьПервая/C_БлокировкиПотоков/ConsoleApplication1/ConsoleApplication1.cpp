// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <thread>
#include <mutex>
#include "windows.h"
//#include <stdio.h>
//#include <stdarg.h>
//пРИМЕР БЛОКИРОВКИ ПОТОКОВ
class container
{
    
    
public:
    std::mutex _lock;
    std::string _str = "Привет";
    void addrange(std::string __str)
    {
        _lock.lock();
        _str = __str;
        _lock.unlock();
    }
};
void threadFunction(container& c)
{
    for (int i = 0;i < 300;i++)
    {
        c.addrange("@@@@@@@@@@");
        c._lock.lock();
        Sleep(50);
        c._lock.unlock();
        std::cout <<"P1"+ c._str << std::endl;
    }
}
void threadFunction2(container& c)
{
    for (int i = 0;i < 300;i++)
    {
        c.addrange("!!!!!!!");
        c._lock.lock();
        Sleep(50);
        c._lock.unlock();
        std::cout << "P2" + c._str << std::endl;
    }
}
/// <summary>
/// Потоки
/// https://nuancesprog-ru.turbopages.org/nuancesprog.ru/s/p/5452/
/// Блокировка потоков
/// https://habr.com/ru/post/182610/
/// </summary>
int main()
{
    srand((unsigned int)time(0));
    container cntr;
    std::thread t1(threadFunction, std::ref(cntr));
    std::thread t2(threadFunction2, std::ref(cntr));
    std::thread t3([](container& _cntr)
        {
            
            for (int i = 0;i < 30;i++)
            {
                std::cout << _cntr._str << std::endl;
            }
        }, std::ref(cntr));
    t1.join();
    t2.join();
    t3.join();
    std::cout << "Hello World!\n";
    system("Pause");
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
