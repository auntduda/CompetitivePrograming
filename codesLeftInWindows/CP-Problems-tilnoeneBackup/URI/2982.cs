using System;

class URI
{
    static void Main() {
        int soma = 0, n = int.Parse(Console.ReadLine().Trim());
        
        for(int i = 0; i < n; i++){
            string linha = Console.ReadLine();
            if (string.IsNullOrEmpty(linha))
                break;
            string[] ls = linha.Split(' ');
            
            string e = ls[0];
            int v = int.Parse(ls[1]);

            if(e == "G"){
                soma-=v;
            } else{
                soma+=v;
            }
        }
        
        if(soma>=0){
            Console.Write("A greve vai parar.\n");
        } else{
            Console.Write("NAO VAI TER CORTE, VAI TER LUTA!\n");
        }
        
    }
}
