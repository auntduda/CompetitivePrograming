using System;

class URI
{
    static void Main() {
        int n = int.Parse(System.Console.ReadLine().Trim());
        
        Console.Write("{0}:{1}:{2}\n", n/3600, (n%3600)/60, (n%3600)%60);
    }
}