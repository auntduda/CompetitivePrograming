using System;

class URI
{
    static void Main() {
        int n = int.Parse(System.Console.ReadLine().Trim()), i, soma=1;
        
        for(i=2;i<=n;i++){
            soma=soma*i;
        }
        Console.Write("{0}\n", soma);

    }
}