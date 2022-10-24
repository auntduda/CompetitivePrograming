using System;

class URI
{
    static void Main() {
        double a = double.Parse(System.Console.ReadLine().Trim());
        int n = Convert.ToInt32(Math.Truncate(a));
        Console.Write("NOTAS:\n{0} nota(s) de R$ 100.00\n{1} nota(s) de R$ 50.00\n{2} nota(s) de R$ 20.00\n{3} nota(s) de R$ 10.00\n{4} nota(s) de R$ 5.00\n{5} nota(s) de R$ 2.00\n", n/100, (n%100)/50, ((n%100)%50)/20, (((n%100)%50)%20)/10, ((((n%100)%50)%20)%10)/5, (((((n%100)%50)%20)%10)%5)/2);
        int v = Convert.ToInt32(Math.Truncate(a*100-n*100));
        Console.Write("MOEDAS:\n{0} moeda(s) de R$ 1.00\n{1} moeda(s) de R$ 0.50\n{2} moeda(s) de R$ 0.25\n{3} moeda(s) de R$ 0.10\n{4} moeda(s) de R$ 0.05\n{5} moeda(s) de R$ 0.01\n", (((((n%100)%50)%20)%10)%5)%2, v/50, (v%50)/25, ((v%50)%25)/10, (((v%50)%25)%10)/5, (((v%50)%25)%10)%5);
    }
}