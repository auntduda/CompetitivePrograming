using System;

class URI
{
    static void Main() {
        int n = int.Parse(System.Console.ReadLine().Trim());
        string e = System.Console.ReadLine().Trim();
        double soma = 0, valor;
        int i, j;
        for(i=0;i<12;i++){
            for(j=0;j<12;j++){
                valor = double.Parse(System.Console.ReadLine().Trim());
                if(i==n){
                    soma+=valor;
                }
            }
        }
        
        if(e=="S"){
            Console.Write("{0:f1}\n", soma);
        }else{
            Console.Write("{0:f1}\n", soma/12);
        } 
    }
}