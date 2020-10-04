// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdint>

int main()
{
    ////////////////////////////////////////////////////////////////////////////////////////////
    //Попробуйте гавести курсор на int16_t и нажать F12
    ////////////////////////////////////////////////////////////////////////////////////////////
    {std::int8_t x('W');std::cout <<"<sizeof(typedef signed char        int8_t),x>=<"<< sizeof(x) <<","<< x <<">"<< std::endl;}
    {std::int16_t x(5);std::cout << "<sizeof(typedef short              int16_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::int32_t x(5);std::cout << "<sizeof(typedef int                int32_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::int64_t x(5);std::cout << "<sizeof(typedef long long          int64_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::uint8_t x('W');std::cout << "<sizeof(typedef unsigned char      uint8_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::uint16_t x(5);std::cout << "<sizeof(typedef unsigned short     uint16_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::uint32_t x(5);std::cout << "<sizeof(typedef unsigned int       uint32_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::uint64_t x(5);std::cout << "<sizeof(typedef unsigned long long uint64_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::int_least8_t x('W');std::cout << "<sizeof(typedef signed char        int_least8_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::int_least16_t x(5);std::cout << "<sizeof(typedef short              int_least16_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::int_least32_t x(5);std::cout << "<sizeof(typedef int                int_least32_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::int_least64_t x(5);std::cout << "<sizeof(typedef long long          int_least64_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::uint_least8_t x(5);std::cout << "<sizeof(typedef unsigned char      uint_least8_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::uint_least16_t x(5);std::cout << "<sizeof(typedef unsigned short     uint_least16_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::uint_least32_t x(5);std::cout << "<sizeof(typedef unsigned int       uint_least32_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::uint_least64_t x(5);std::cout << "<sizeof(typedef unsigned long long uint_least64_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::int_fast8_t x('W');std::cout << "<sizeof(typedef signed char        int_fast8_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::int_fast16_t x(5);std::cout << "<sizeof(typedef int                int_fast16_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::int_fast32_t x(5);std::cout << "<sizeof(typedef int                int_fast32_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::int_fast64_t x(5);std::cout << "<sizeof(typedef long long          int_fast64_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::uint_fast8_t x('W');std::cout << "<sizeof(typedef unsigned char      uint_fast8_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::uint_fast16_t x(5);std::cout << "<sizeof(typedef unsigned int       uint_fast16_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::uint_fast32_t x(5);std::cout << "<sizeof(typedef unsigned int       uint_fast32_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::uint_fast64_t x(5);std::cout << "<sizeof(typedef unsigned long long uint_fast64_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::intmax_t x(5);std::cout << "<sizeof(typedef long long          intmax_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    {std::uintmax_t x=5;std::cout << "<sizeof(typedef unsigned long long uintmax_t),x>=<" << sizeof(x) << "," << x << ">" << std::endl;}
    ////////////////////////////////////////////////////////////////////////////////////////////
    /*

;

;
;

    */
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
