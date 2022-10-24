using System;

class URI
{
    static void Main() {
        int p1 = int.Parse(System.Console.ReadLine().Trim()), p2 = int.Parse(System.Console.ReadLine().Trim()), p3 = int.Parse(System.Console.ReadLine().Trim()), p4 = int.Parse(System.Console.ReadLine().Trim()), p5 = int.Parse(System.Console.ReadLine().Trim()), soma=0;
        Console.Write("{0}\n", p1*300+p2*1500+p3*600+p4*1000+p5*150+225);
    }
}