using System;

class URI
{
    static void Main() {
        
        string[] ls = Console.ReadLine().Split(' ');
        int a = int.Parse(ls[0]), b = int.Parse(ls[1]);
        
        Console.Write("{0}\n", a % b);

    }
}
