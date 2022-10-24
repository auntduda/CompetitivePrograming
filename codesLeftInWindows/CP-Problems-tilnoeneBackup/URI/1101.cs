using System;

class URI
{
    static void Main() {
        int m, n, soma, i, temp;
        while(true){
            string ons = System.Console.ReadLine().Trim();
            string[] ns = ons.Split(' '); 
            n = int.Parse(ns[0]);
            m = int.Parse(ns[1]);
            if(m<=0 || n<=0){
                break;
            }
            if(m>n){
                temp=n;
                n=m;
                m=temp;
            }
            soma=0;
            for(i=m;i<=n;i++){
                soma+=i;
                Console.Write("{0} ", i);
            }
            Console.Write("Sum={0}\n", soma);
        }
    }
}