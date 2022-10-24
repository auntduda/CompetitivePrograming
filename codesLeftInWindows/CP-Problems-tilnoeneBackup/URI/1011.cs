using System;

class URI
{
    static void Main() {
        double r = double.Parse(System.Console.ReadLine().Trim());
        
        Console.Write("VOLUME = {0:f3}\n", (r*r*r*3.14159*4/3.0));
    }
}