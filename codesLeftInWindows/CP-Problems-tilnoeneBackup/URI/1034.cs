using System;

class URI
{
    static void Main() {
        int e, alc=0, gas=0, die=0;
        while(true){
            e = int.Parse(System.Console.ReadLine().Trim());
            if(e==4){
                break;
            } else if(e==1){
                alc++;
            } else if(e==2){
                gas++;
            } else if(e==3){
                die++;
            }
        }
        Console.Write("MUITO OBRIGADO\n");
        Console.Write("Alcool: {0}\n", alc);
        Console.Write("Gasolina: {0}\n", gas);
        Console.Write("Diesel: {0}\n", die);
    }
}