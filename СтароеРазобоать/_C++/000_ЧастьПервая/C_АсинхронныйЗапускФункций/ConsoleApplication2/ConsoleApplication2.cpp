// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <functional>
#include <future>
#include "windows.h"
int main()
{
    auto summator = [](int& value) { return ++value; };
    int sum = 1;
    for (int i = 0; i < 6; ++i)
        async(std::launch::async, summator, std::ref(sum));

    std::cout << "sum="<< sum << std::endl;
    std::cout << "sum=" << std::async(std::launch::async, summator, std::ref(sum)).get() << std::endl;
    //смысл асинхронных функций в том что вы можете запустить их вычисление
    //высислять их паралельно
    //И при этом ожидать в конце через Get метод результат окончания их вычисления
    auto _func_7 = [](int& value) { Sleep(500);std::cout << "_func_7" << std::endl;value = value + 7; return 7; };
    auto _func_90 = [](int& value) { Sleep(1000);std::cout << "_func_90" << std::endl;value = value + 90; return 90; };
    auto _func_97 = [](int& value,auto f1, auto f2)
    {
        std::async(std::launch::async, f2, std::ref(value));
        std::async(std::launch::async, f1, std::ref(value));
        Sleep(1000);
        std::cout << "_func_97" << std::endl;
        return 97; 
    };
    std::cout << "_func_97 =" 
        << std::async(std::launch::async, _func_97, std::ref(sum),_func_7,_func_90).get() 
        << std::endl
    ;
    
    //std::cout << "sum=" <<  << std::endl;
    
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
