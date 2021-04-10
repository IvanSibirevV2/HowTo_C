// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
struct DataContext
{  
public:
    int a;
    int b;
    int c;
    int rez;
    bool CalkLocker;
    DataContext(){}
    DataContext(int _a,int _b,int _c)
    {
        a = _a;
        this->b = _b;
        this->c = _c;
        CalkLocker = false;
    }
    int DO()
    {
        CalkLocker = true;
        rez = 0;
        rez += a;
        this->rez += b;
        this->rez -= c;
        return rez;
    }
    int Get_Resalt()
    {
        if (!CalkLocker) DO();
        return rez;
    }

};
int Get_S(DataContext _DataContext)
{
    _DataContext.rez = 0;
    _DataContext.rez += _DataContext.a;
    _DataContext.rez += _DataContext.b;
    _DataContext.rez -= _DataContext.c;
    return _DataContext.rez;
    //return a+b-c;
}
int main()
{
    //std::cout << "Get_ACB(1, 5, 3)="<< Get_ACB(1, 5, 3) << std::endl;
    //Без параметрический конструктор
    DataContext _DataContext = DataContext();
    //Параметрический конструктор
    _DataContext = DataContext(1, 5, 3);
    
    ////////////////////////////////////
    
    std::cout << "_DataContext.Get_S()=" << _DataContext.Get_Resalt() << std::endl;
    std::cout << "_DataContext.Get_S()=" << _DataContext.Get_Resalt() << std::endl;
    std::cout << "_DataContext.Get_S()=" << _DataContext.DO() << std::endl;
    std::cout << "Hello World!"<<std::endl;
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
