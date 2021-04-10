// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
//////////////////////////////////////////////////////////////////////////////////////////////////////
#include<windows.h>
#define __Set_TimeTestX 100000000
#define __Set_TestTimeStart double TickStart = GetTickCount(); for(int i=0;i<__Set_TimeTestX;i++)
#define __Set_TestTimeStop double TickFinish = GetTickCount();std::cout << "_TimeTest=" << TickFinish-TickStart << std::endl;
//////////////////////////////////////////////////////////////////////////////////////////////////////
int Summma(int a, int b){return a + b;}
_forceinline int Summma_2(int a, int b) { return a + b; }
double Summma(double a, double b) { return a + b; }
_forceinline double Summma_2(double a, double b) { return a + b; }

int main()
{
    if (!false)
    {
        //Сложения чисел На время
        std::cout << "c = a + b;" << std::endl;
        {
            int a(2);
            int b(3);
            int c(0);
            {__Set_TestTimeStart
                { c = a + b; }
                __Set_TestTimeStop}
            {__Set_TestTimeStart
                { c = Summma(a, b); }
                __Set_TestTimeStop}
            {__Set_TestTimeStart
                { c = Summma_2(a, b); }
                __Set_TestTimeStop}
        }
    }
    else if (!false)
    {
        //double
        //Сложения чисел На время
        std::cout << "c = a + b;" << std::endl;
        {
            ;
            double a(2.3);
            double b(3.888);
            double c(0);
            {__Set_TestTimeStart
                { c = a + b; }
                __Set_TestTimeStop}
            {__Set_TestTimeStart
                { c = Summma(a, b); }
                __Set_TestTimeStop}
            {__Set_TestTimeStart
                { c = Summma_2(a, b); }
                __Set_TestTimeStop}
        }
    }
    else if (false)
    {
    }
    return 1;
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
