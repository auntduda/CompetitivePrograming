using System;

class URI
{
    static void Main() {
        int maior = int.Parse(System.Console.ReadLine().Trim()), pos=1, i, n;
        
        for(i=2;i<=100;i++){
            n = int.Parse(System.Console.ReadLine().Trim());
            if(n>maior){
                maior=n;
                pos=i;
            }
        }
        
        Console.Write("{0}\n{1}\n", maior, pos);
    }
}