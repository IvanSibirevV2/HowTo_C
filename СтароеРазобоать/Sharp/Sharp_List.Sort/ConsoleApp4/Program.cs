//Сортировки массива стандартными библиотеками c#
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp4
{
    class Program
    {
        static void Main(string[] args)
        {
            List<int> _ListInt = new List<int> { 1, 2, 3, 4, 60, 15 };
            System.Console.Write("{");_ListInt.ForEach(a =>System.Console.Write(a+","));System.Console.WriteLine("}");
            
            _ListInt.Sort();
            System.Console.Write("{"); _ListInt.ForEach(a => System.Console.Write(a + ",")); System.Console.WriteLine("}");
            _ListInt.Sort((int x, int y)=>
            {
                if(x>y) return -1;
                if (x < y) return 1;
                return 0;
            });
            System.Console.Write("{"); _ListInt.ForEach(a => System.Console.Write(a + ",")); System.Console.WriteLine("}");

            System.Console.WriteLine("Привет мир");
            System.Console.ReadLine();
        }
    }
}
