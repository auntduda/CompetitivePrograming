using System;

class URI
{
    static void Main() {
        int escolha=0;
        double n, x=-1, y;
        while(true){
            n = double.Parse(System.Console.ReadLine().Trim());
            if(n>=0 && n<=10){
                if(x==-1){
                    x=n;
                } else{
                    y=n;
                    break;
                }
            } else{
                Console.Write("nota invalida\n");
            }
        }
        Console.Write("media = {0:f2}\n", (x+y)/2);
        
        while(escolha!=2){
            if(escolha!=1 && escolha!=2){
                Console.Write("novo calculo (1-sim 2-nao)\n");
                escolha=2;
                escolha = int.Parse(System.Console.ReadLine().Trim());
            } else if(escolha==1){
                x=-1;
                while(true){
                    n = double.Parse(System.Console.ReadLine().Trim());
                    if(n>=0 && n<=10){
                        if(x==-1){
                            x=n;
                        } else{
                            y=n;
                            break;
                        }
                    } else{
                        Console.Write("nota invalida\n");
                    }
                }
                Console.Write("media = {0:f2}\n", (x+y)/2);
                Console.Write("novo calculo (1-sim 2-nao)\n");
                escolha = int.Parse(System.Console.ReadLine().Trim());
            } else{
                break;
            }
        }
    
    }
}