using System;

class URI
{
    static void Main() {
        int l, i, j;
        double valor, soma=0;
        string escolha;
        l = int.Parse(System.Console.ReadLine().Trim());
        escolha = System.Console.ReadLine().Trim();
        for(i=0;i<12;i++){
            for(j=0;j<12;j++){
                valor = double.Parse(System.Console.ReadLine().Trim());
                if(j==l){
                    soma+=valor;
                }
            }
        }
        
        if(escolha=="S"){
            Console.Write("{0:f1}\n", soma);
        } else{
            Console.Write("{0:f1}\n", soma/12);
        }
    }
}