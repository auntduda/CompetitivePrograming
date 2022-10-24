using System;

class URI
{
    static void Main() {
        int n, i, soma;
        while(true){
            n = int.Parse(System.Console.ReadLine().Trim());
            if(n==0){
                break;
            }
            if(n%2!=0){
                n+=1;
            }
            soma=0;
            for(i=0;i<5;i++){
                soma+=n;
                n+=2;
            }
            Console.Write("{0}\n", soma);
        }
    }
}