using System;

class URI
{
    static void Main() {
        int a = int.Parse(System.Console.ReadLine().Trim());
        int m = int.Parse(System.Console.ReadLine().Trim());
        
        Console.Write("{0}\n", a%m);
    }
}