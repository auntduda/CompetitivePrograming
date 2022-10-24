using System;

class URI
{
    static void Main() {
        
        int idade, n=0;
        double soma=0;
        while(true){
            idade = int.Parse(System.Console.ReadLine().Trim());
            if(idade<0){
                break;
            }
            soma+=idade;
            n++;
        }
        Console.Write("{0:f2}\n", soma/n);

    }
}