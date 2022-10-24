using System;

class URI
{
    static void Main() {
        double renda = double.Parse(System.Console.ReadLine().Trim());

        if(renda<=2000){
            Console.Write("Isento\n");
        } else{
            if(renda<=3000){
                Console.Write("R$ {0:f2}\n", (8*(renda-2000))/100);
            } else{
                if(renda<=4500){
                    Console.Write("R$ {0:f2}\n", (18*(renda-3000))/100+80);
                } else{
                    Console.Write("R$ {0:f2}\n", (28*(renda-4500))/100+270+80);
                }
            }
        }
        
    }
}