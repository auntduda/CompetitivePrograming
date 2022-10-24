using System;

class URI
{
    static void Main() {
        string an = System.Console.ReadLine().Trim();
        string[] n = an.Split(' ');
        int a = int.Parse(n[0]), b = int.Parse(n[1]), c = int.Parse(n[2]), d = int.Parse(n[3]);
        
        if(b>c && d>a && c+d>a+b && c>0 && d>0 && a%2==0){ 
            Console.Write("Valores aceitos\n");
        }
        else{ 
            Console.Write("Valores nao aceitos\n");
        }
    }
}