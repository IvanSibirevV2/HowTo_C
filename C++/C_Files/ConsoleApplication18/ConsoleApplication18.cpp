﻿// ConsoleApplication18.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//С++ Пример Чтения записи файла
//С предварительным открытием через блокнот через CMD.exe
//пример с дозаписью в файл
#include <iostream>
#include <fstream>
#include <string>

#include <windows.h>
#include "ShellAPI.h"
using namespace std;

int main()
{
    //////////////////////////////////////////////////////////////////////////////////////
    std::ofstream out;          // поток для записи
    out.open("C:\\D\\hello.txt"); // окрываем файл для записи
    if (out.is_open())
    {
        out << "Hello World!" << std::endl;
        out << "Привет" << std::endl;
    }
    std::cout << "C++ ..." << std::endl;
    out.close();
    //////////////////////////////////////////////////////////////////////////////////////
    //https://mydocx.ru/4-8617.html
    //Запуск прилождения отдельным процессом
    //ShellExecute(0, TEXT("open"),TEXT("C:\\D\\hello.txt"),NULL, NULL, SW_SHOWNORMAL);
    //Запуск прилождения отдельным В РОДИТЕЛЬСКОМ ПРОЦЕССЕ (ПРИ ЕГО ПОЛНОЙ ОСТАНОВКЕ ДО ВОСТРЕБОВАНИЯ)  
    system("C:\\D\\hello.txt");
    //Запуск консоли в интерактивном режиме
    //system("cmd.exe");
    std::cout << "C++ ..." << std::endl;
    //////////////////////////////////////////////////////////////////////////////////////
    setlocale(LC_ALL, "Russian");
    std::string line;
    std::ifstream fin; // открыли файл для чтения
    fin.open("C:\\D\\hello.txt");
    if (fin.is_open())
    {
        while (getline(fin, line))
        {
            std::cout << line << std::endl;
        }
    }
    fin.close(); // закрываем файл
    std::cout << "C++ ..." << std::endl;
    //////////////////////////////////////////////////////////////////////////////////////
    //open("file.txt", ios_base::out | ios_base::app);
    std::ofstream out2;          
    out2.open("C:\\D\\hello.txt", ios_base::out | ios_base::app);
    if (out2.is_open())
    {
        out2 << "Ура!!!!!!!!!!!!!!!!!" << std::endl;
    }
    std::cout << "C++ ..." << std::endl;
    out2.close();
    system("C:\\D\\hello.txt");
    //////////////////////////////////////////////////////////////////////////////////////
    system("pause");
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
