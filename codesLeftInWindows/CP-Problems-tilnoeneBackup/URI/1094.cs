using System;

class URI
{
    static void Main() {
        int n = int.Parse(System.Console.ReadLine().Trim()), v, s=0, r=0, c=0, i;
        char animal;

        for(i=0;i<n;i++){
            string ss = System.Console.ReadLine().Trim();
            string[] ns = ss.Split(' ');
            v = int.Parse(ns[0]);
            animal = char.Parse(ns[1]);
            if(animal=='C'){
                c+=v;
            } else if(animal=='R'){
                r+=v;
            } else{
                s+=v;
            }
        }
        double soma = c+r+s;
    
        Console.Write("Total: {0} cobaias\n", c+r+s);
        Console.Write("Total de coelhos: {0}\n", c);
        Console.Write("Total de ratos: {0}\n", r);
        Console.Write("Total de sapos: {0}\n", s);
        Console.Write("Percentual de coelhos: {0:f2} %\n", (100*c)/soma);
        Console.Write("Percentual de ratos: {0:f2} %\n", (100*r)/soma);
        Console.Write("Percentual de sapos: {0:f2} %\n", (100*s)/soma);
    }
}