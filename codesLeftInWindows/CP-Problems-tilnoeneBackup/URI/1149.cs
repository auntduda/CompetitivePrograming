using System;

class URI
{
    static void Main() {
        int a, n, soma=0, i, k=2;
            
        string nums = System.Console.ReadLine().Trim();
        string[] ns = nums.Split(' ');
        
        a = int.Parse(ns[0]);
        n = int.Parse(ns[1]);
        while(n<=0){
            n = int.Parse(ns[k]);
            k++;
        }
        for(i=0;i<n;i++){
            soma=soma+(a+i);
        }
        Console.Write("{0}\n", soma);
        
    }
}