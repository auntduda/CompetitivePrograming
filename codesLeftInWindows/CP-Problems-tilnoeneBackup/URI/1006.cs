using System;

class URI
{
    static void Main() {
        double a = double.Parse(System.Console.ReadLine().Trim());
        double b = double.Parse(System.Console.ReadLine().Trim());
        double c = double.Parse(System.Console.ReadLine().Trim());
        
        Console.Write("MEDIA = {0:f1}\n", (((a*2)+(b*3)+(c*5))/10));
    }
}