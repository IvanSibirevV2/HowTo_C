using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/// <summary>
/// C#
/// Пример функции, которая возвращает указатель на себя
/// </summary>
namespace ConsoleApp8
{
    /// <summary>
    /// 
    /// </summary>
    class Program
    {
        public delegate dynamic Funk1(System.String _str); 
        public static dynamic Write(System.String _str) 
        {
            System.Func<System.String, dynamic> _func = Write;
            System.Console.WriteLine(_str);
            return _func;
        }
        static void Main(string[] args)
        {
            ConsoleApp8.Program.Write("123")("456")("789");
            System.Console.ReadLine();
        }
    }
}
