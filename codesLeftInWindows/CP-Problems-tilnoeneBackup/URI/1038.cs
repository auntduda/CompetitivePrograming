using System;

class URI
{
    static void Main() {
        string an = System.Console.ReadLine().Trim();
        string[] n = an.Split(' ');
        double a = double.Parse(n[0]);
        double b = double.Parse(n[1]);
        
        if(a==1){
            Console.Write("Total: R$ {0:f2}\n", b*4);
        }
        else if(a==2){
            Console.Write("Total: R$ {0:f2}\n", b*4.5);
        }
        else if(a==3){
            Console.Write("Total: R$ {0:f2}\n", b*5);
        }
        else if(a==4){
            Console.Write("Total: R$ {0:f2}\n", b*2);
        }
        else{
            Console.Write("Total: R$ {0:f2}\n", b*1.5);
        }
    }
}