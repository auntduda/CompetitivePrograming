using System;

class URI
{
    static void Main() {
        int a = int.Parse(System.Console.ReadLine().Trim());
        int b = int.Parse(System.Console.ReadLine().Trim());
        int c = int.Parse(System.Console.ReadLine().Trim());
        int d = int.Parse(System.Console.ReadLine().Trim());
        
        Console.Write("DIFERENCA = {0}\n", (a*b-c*d));
    }
}