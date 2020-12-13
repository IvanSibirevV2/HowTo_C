//ПРИМЕР ПЕРЕЧИСЛЕНИЯ
//c#
//https://metanit.com/sharp/tutorial/2.12.php
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp3
{
    public enum Animals
    {
        Cat = 0
        , Tapir = 1
        , Elefant = 2
        , Crocodail = 3
    };
    class Program
    {
        static void Main(string[] args)
        {
            Animals _Animals = Animals.Cat;
            _Animals = Animals.Tapir;
            _Animals = Animals.Elefant;
            System.Console.WriteLine("_Animals.ToString() =" + _Animals.ToString());
            System.Console.WriteLine("_Animals =" + _Animals);
            System.Console.WriteLine("(int)_Animals =" + (int)_Animals);


            //Получение списком всех возможных перечислений
            Enum.GetValues(typeof(Animals)).Cast<Animals>()
                //Преобразование в массив
                .ToArray()
                //Получение нового массива заданного формата
                //Используются анонимные типы
                .Select(a => new { name = a.ToString(),value = (int)a })
                //Преобразование в список
                .ToList()
                //Вывод на экран через Linq шный .For
                .ForEach(a=>System.Console.WriteLine(a))
                ;
            System.Console.WriteLine("Привет мир");
            System.Console.ReadLine();
        }
    }
}