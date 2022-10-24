using System;

class URI
{
    static void Main() {
        long n = int.Parse(System.Console.ReadLine().Trim());
        
        Console.Write("{0:f0}\n", 1+((n*(n-1)/2)+((n*(n-1)*(n-2)*(n-3))/24)));
    }
}