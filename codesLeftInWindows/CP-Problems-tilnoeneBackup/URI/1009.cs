using System;

class URI
{
    
    static void Main() {
        string nome = Console.ReadLine();
        double a = double.Parse(System.Console.ReadLine().Trim());
        double b = double.Parse(System.Console.ReadLine().Trim());
        
        Console.Write("TOTAL = R$ {0:f2}\n", a+0.15*b);
    }
}