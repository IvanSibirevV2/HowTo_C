using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp6
{
    public enum MyEnum
    {
        HelloWorld =10
        , Cat = 15
        , Dog = 20
        , kItty = 200
    }
    public class Program
    {
        static void Main(string[] args)
        {
            System.Console.WriteLine("ПриветМир");
            MyEnum _MyEnum = MyEnum.HelloWorld;
            System.Console.WriteLine(
                new { value = _MyEnum, intValue = (int)_MyEnum}
                )
            ;
            _MyEnum = MyEnum.Cat;
            System.Console.WriteLine(
                new { value = _MyEnum, intValue = (int)_MyEnum }
                )
            ;
            _MyEnum = MyEnum.Dog;
            System.Console.WriteLine(
                new { value = _MyEnum, intValue = (int)_MyEnum }
                )
            ;
            _MyEnum = MyEnum.kItty;
            System.Console.WriteLine(
                new { value = _MyEnum, intValue = (int)_MyEnum }
                )
            ;
            System.Console.WriteLine("##########################");

            Enum.GetValues(typeof(MyEnum)).Cast<MyEnum>().ToArray()
                .ToList()
                .ForEach(_MyEn =>
                    System.Console.WriteLine(
                        new { value = _MyEn, intValue = (int)_MyEn }
                    )
                )
            ;
            System.Console.ReadLine();
        }
    }
}
