using System;

class URI
{
    static void Main() {
        int n = int.Parse(System.Console.ReadLine().Trim());
        
        if(n % 2 == 0) Console.Write("{0}\n", n+2);
        else Console.Write("{0}\n", n+1);
        
    }
}