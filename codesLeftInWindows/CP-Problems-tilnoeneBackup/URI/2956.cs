using System;

class URI
{
    static void Main() {
        string nums = System.Console.ReadLine().Trim();
        string[] ns = nums.Split(' ');
        double a = double.Parse(ns[0]);
        double b = double.Parse(ns[1]);
        Console.Write("Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = {0:f5}.\n",(a*b)/2);
    }
}