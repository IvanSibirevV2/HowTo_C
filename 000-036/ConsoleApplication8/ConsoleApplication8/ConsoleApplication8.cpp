// ConsoleApplication8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    {
        bool b;
        bool b1 = true; // копирующая инициализация
        bool b2(false); // прямая инициализация
        bool b3{ true }; // uniform-инициализация (C++11)
        b3 = false; // операция присваивания
        std::cout << "Hello World!\n";
    }
    {
        std::cout << true << std::endl; // вместо true единица
        std::cout << !true << std::endl; // вместо !true ноль
        bool b(false);
        std::cout << b << std::endl; // b - false (0)
        std::cout << !b << std::endl; // !b - true (1)
        ////////////////////////////////
        std::cout << true << std::endl;
        std::cout << false << std::endl;
        std::cout << std::boolalpha; // выводим логические значения как "true" или "false"
        std::cout << true << std::endl;
        std::cout << false << std::endl;
    }
    {
        char ch(97);
        std::cout << ch << std::endl; // выводим значение переменной типа int
        int i(ch); // присваиваем значение переменной ch переменной типа int
        std::cout << i << std::endl; // выводим значение переменной типа int
    }
    {
        char ch(97);
        std::cout << ch << std::endl;
        std::cout << static_cast<int>(ch) << std::endl;
        std::cout << ch << std::endl;
    }
    if(false)
    {
        std::cout << "Input a keyboard character: ";
        char ch;
        std::cin >> ch;
        std::cout << ch << " has ASCII code " << static_cast<int>(ch) << std::endl;
    }
    {
        std::cout << "First line\nSecond line" << std::endl;
        std::cout << "\"This is quoted text\"\n";
        std::cout << "This string contains a single backslash \\" << std::endl;
        std::cout << "6F in hex is char \'\x6F\'" << std::endl;
        char ch('56');
        std::cout << ch << " has ASCII code " << static_cast<int>(ch) << std::endl;
    }
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
