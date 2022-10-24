using System;

class URI
{
    static void Main() {
        int ddd = int.Parse(System.Console.ReadLine().Trim());
        
        if(ddd==61){
            Console.Write("Brasilia\n");
        } else if(ddd==71){
            Console.Write("Salvador\n");
        } else if(ddd==11){
            Console.Write("Sao Paulo\n");
        } else if(ddd==21){
            Console.Write("Rio de Janeiro\n");
        } else if(ddd==32){
            Console.Write("Juiz de Fora\n");
        } else if(ddd==19){
            Console.Write("Campinas\n");
        } else if(ddd==27){
            Console.Write("Vitoria\n");
        } else if(ddd==31){
            Console.Write("Belo Horizonte\n");
        } else{
            Console.Write("DDD nao cadastrado\n");
        }
    }
}