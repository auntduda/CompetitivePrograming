using System;

class URI
{
    static void Main() {
        int n, x, soma, i, j;
        n = int.Parse(System.Console.ReadLine().Trim());
        for(i=0;i<n;i++){
            x = int.Parse(System.Console.ReadLine().Trim());
            soma=0;
            for(j=1;j<x;j++){
                if(x%j==0){
                    soma+=j;
                }
            }
            if(soma==x){
                Console.Write("{0} eh perfeito\n", x);
            } else{
                Console.Write("{0} nao eh perfeito\n", x);
            }
        }
        
    }
}