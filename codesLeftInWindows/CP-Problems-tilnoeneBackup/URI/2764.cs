using System;

class URI
{
    static void Main() {
        string a = System.Console.ReadLine().Trim();
        
        Console.Write("{0}{1}/{2}{3}/{4}{5}\n", a[3], a[4], a[0], a[1], a[6], a[7]);
        Console.Write("{0}{1}/{2}{3}/{4}{5}\n", a[6], a[7], a[3], a[4], a[0], a[1]);
        Console.Write("{0}{1}-{2}{3}-{4}{5}\n", a[0], a[1], a[3], a[4], a[6], a[7]);
    }
}