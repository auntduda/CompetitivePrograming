using System;

class URI
{
    static void Main() {
        int n = int.Parse(System.Console.ReadLine().Trim());
        
        Console.Write("{0} ano(s)\n{1} mes(es)\n{2} dia(s)\n", n/365, (n%365)/30, (n%365)%30);
    }
}