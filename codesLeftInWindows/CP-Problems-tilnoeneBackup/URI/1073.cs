using System;

class URI
{
    static void Main() {
        int n = int.Parse(System.Console.ReadLine().Trim());
        
        int fim = n;
        if(n%2!=0){
            fim=n-1;
        }
    
        for(int i=2;i<=fim;i+=2){
            Console.Write("{0}^2 = {1}\n", i, i*i);
        }
    }
}