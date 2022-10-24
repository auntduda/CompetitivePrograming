using System;

class URI
{
    static void Main() {
        int m=int.Parse(System.Console.ReadLine().Trim()), a=int.Parse(System.Console.ReadLine().Trim()), b=int.Parse(System.Console.ReadLine().Trim());
        int c = m-a-b;
        if(a>b){
            if(a>c){
                Console.Write("{0}\n", a);
            } else{
                Console.Write("{0}\n", c);
            }
        } else{
            if(b>c){
                Console.Write("{0}\n", b);
            } else{
                Console.Write("{0}\n", c);
            }
        }
    }
}