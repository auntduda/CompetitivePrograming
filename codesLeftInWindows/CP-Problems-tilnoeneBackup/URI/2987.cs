using System;

class URI
{
    static void Main() {
        String l = System.Console.ReadLine().Trim();
        Console.Write("{0}\n", System.Convert.ToInt32(l[0])-64);
    }
}