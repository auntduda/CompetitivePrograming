using System;

class URI
{
    static void Main() {
        int a = int.Parse(System.Console.ReadLine().Trim());
        int b = int.Parse(System.Console.ReadLine().Trim());
        
        Console.Write("{0:f3}\n", a*b/12.0);
    }
}