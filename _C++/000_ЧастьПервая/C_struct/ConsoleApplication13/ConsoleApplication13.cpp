// ConsoleApplication13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
struct Employee
{
public:
    short id;
    int age;
    double salary;
    Employee(){}
    Employee(short _id, int _age, double _salary)
    {
        this->id = _id;
        this->age = _age;
        this->salary = _salary;
    }
    void Set_Write()
    {
        ;
        std::cout << "this->id="<< this->id << std::endl;
        std::cout << "this->age="<< this->age << std::endl;
        std::cout << "this->salary="<< this->salary << std::endl;
    }
};

int main()
{
    {
        using std::cout; // "using-объявление" сообщает компилятору, что cout следует обрабатывать, как std::cout
        cout << "Hello, world!"<<std::endl; // и никакого префикса std:: уже здесь не нужно!
    }
    {
        Employee _Employee = Employee(0, 0, 0);
        _Employee.Set_Write();
    }
    {
        std::string myName;
        std::cin>>myName;
        std::cout << std::endl;
        std::cout << myName << std::endl;
    }
    std::cout << "Hello World!" << std::endl;
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
