using System;

class URI
{
    static void Main() {
        
        double n1=-1, n2, nota;
        while(true){
            nota = double.Parse(System.Console.ReadLine().Trim());
            if(nota>=0 && nota<=10){
                if(n1<0){
                    n1=nota;
                } else{
                    n2=nota;
                    break;
                }
            } else{
                Console.Write("nota invalida\n");
            }
        }
        Console.Write("media = {0:f2}\n", (n1+n2)/2);
    
    }
}