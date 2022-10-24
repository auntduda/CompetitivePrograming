using System;

class URI
{
    static void Main() {
        int n = int.Parse(System.Console.ReadLine().Trim());
        
        Console.Write("{0}\n", n);
        Console.Write("{0} nota(s) de R$ 100,00\n", n/100);
        Console.Write("{0} nota(s) de R$ 50,00\n", (n%100)/50);
        Console.Write("{0} nota(s) de R$ 20,00\n", ((n%100)%50)/20);
        Console.Write("{0} nota(s) de R$ 10,00\n", (((n%100)%50)%20)/10);
        Console.Write("{0} nota(s) de R$ 5,00\n", ((((n%100)%50)%20)%10)/5);
        Console.Write("{0} nota(s) de R$ 2,00\n", (((((n%100)%50)%20)%10)%5)/2);
        Console.Write("{0} nota(s) de R$ 1,00\n", (((((n%100)%50)%20)%10)%5)%2);
    }
}