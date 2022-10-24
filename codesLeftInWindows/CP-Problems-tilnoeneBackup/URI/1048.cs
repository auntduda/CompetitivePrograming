using System;

class URI
{
    static void Escreve(double salario, int porcentagem) {
        Console.Write("Novo salario: {0:f2}\n", (salario*(100+porcentagem))/100);
        Console.Write("Reajuste ganho: {0:f2}\n", (porcentagem*salario)/100);
    }
    
    static void Main() {
        double salario = double.Parse(System.Console.ReadLine().Trim());
        
        if(salario<=400){
            Escreve(salario, 15);
            Console.Write("Em percentual: 15 %\n");
        } else if(salario<=800){
            Escreve(salario, 12);
            Console.Write("Em percentual: 12 %\n");
        } else if(salario<=1200){
            Escreve(salario, 10);
            Console.Write("Em percentual: 10 %\n");
        } else if(salario<=2000){
            Escreve(salario, 7);
            Console.Write("Em percentual: 7 %\n");
        } else {
            Escreve(salario, 4);
            Console.Write("Em percentual: 4 %\n");
        }
        
    }
}