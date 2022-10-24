using System;

class URI
{
    static void Main() {
        double a = double.Parse(System.Console.ReadLine().Trim());
        double b = double.Parse(System.Console.ReadLine().Trim());
        
        Console.Write("MEDIA = {0:f5}\n", ((a*3.5)+(b*7.5))/11);
    }
}