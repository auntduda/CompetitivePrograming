using System;

class URI
{
    static void Main() {
        
        int senha = int.Parse(System.Console.ReadLine().Trim());
        while(senha!=2002){
            Console.Write("Senha Invalida\n");
            senha = int.Parse(System.Console.ReadLine().Trim());
        }
        Console.Write("Acesso Permitido\n");
    
    }
}