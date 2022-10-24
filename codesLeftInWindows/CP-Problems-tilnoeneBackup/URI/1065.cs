using System;

class URI
{
    static void Main() {
        int num, pares=0;
        
        for(int i=1;i<=5;i++){
            num = int.Parse(System.Console.ReadLine().Trim());
            if(num%2==0){
                pares++;
            }
        }
        
        Console.Write("{0} valores pares\n", pares);
    }
}