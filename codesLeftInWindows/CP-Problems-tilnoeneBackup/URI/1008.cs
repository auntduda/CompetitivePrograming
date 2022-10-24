using System;

class URI
{
    static void Main() {
        int a = int.Parse(System.Console.ReadLine().Trim());
        int b = int.Parse(System.Console.ReadLine().Trim());
        double c = double.Parse(System.Console.ReadLine().Trim());
        
        Console.Write("NUMBER = {0}\nSALARY = U$ {1:f2}\n", a, b*c);
    }
}