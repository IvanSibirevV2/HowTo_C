﻿// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
void doSomething();

int main()
{
    if (false) 
    {
        //оБЛАСТЬ ДЕЙСТВИЯ - ВЕСЬ ФАЙЛ, ИЛИ ВЕСЬ ПРОЕКТ - НУЖНО ПРОВЕРИТЬ
        #define MY_FAVORITE_NUMBER 7
        std::cout << "My favorite number is: " << MY_FAVORITE_NUMBER << std::endl;
        #define MY_FAVORITE_VALUE "qwerty"
        std::cout << "My favorite VALUE is: " << MY_FAVORITE_VALUE << std::endl;
        #define USE_YEN
        std::cout << "My favorite USE_YEN is: " << USE_YEN 2<< std::endl;
        #ifdef USE_YEN
        std::cout << "USE_YEN - Define\n";
        #endif
        #ifndef USE_YEN_NOT
        std::cout << "USE_YEN_NOT - NOT Define\n";
        #endif
    }
    else if (!false)
    {
        #define PRINT
        #undef PRINT
        #ifdef PRINT
        std::cout << "Printing!";
        #endif
        #ifndef PRINT
        std::cout << "Not printing!";
        #endif
        #undef PRINT
        #define PRINT
        doSomething();
    }
    else if (!false)
    {

    }
    else if (!false)
    {

    }
    std::cout << "Hello World!\n";
}
void doSomething()
{
#ifdef PRINT
    std::cout << "Printing!";
#endif
#ifndef PRINT
    std::cout << "Not printing!";
#endif
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
