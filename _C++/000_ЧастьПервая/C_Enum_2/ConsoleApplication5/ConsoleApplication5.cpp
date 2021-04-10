// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
enum Animals
{
    Cat = 0
    , Tapir = 1
    , Elefant = 2
    , Crocodail = 3
};
std::string Get_Animals(Animals _Animals)
{
    switch (_Animals)
    {
        case 0:return "Cat";
        case 1:return "Tapir";
        case 2:return "Elefant";
        case 3:return "Crocodail";
        default:return "Cat";
    }
}
int main()
{
    Animals _Animals = Cat;
    _Animals = Tapir;
    _Animals = Elefant;
    std::cout << "_Animals="<< _Animals << std::endl;
    std::cout << "_Animals=" << Get_Animals(_Animals) << std::endl;
    std::cout << "Hello World!" << std::endl;
    int array[_Animals];
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
