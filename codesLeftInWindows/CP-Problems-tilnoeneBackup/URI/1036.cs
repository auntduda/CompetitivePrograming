using System;

class URI
{
    static void Main() {
        string an = System.Console.ReadLine().Trim();
        string[] n = an.Split(' ');
        double a = double.Parse(n[0]), b = double.Parse(n[1]), c = double.Parse(n[2]);
        double delta = b*b-4*a*c;
        if(delta<0 || a==0){ 
            Console.Write("Impossivel calcular\n");
        }
        else{ 
            Console.Write("R1 = {0:f5}\nR2 = {1:f5}\n", (-b+Math.Sqrt(delta))/(2*a), (-b-Math.Sqrt(delta))/(2*a));
        }
    }
}