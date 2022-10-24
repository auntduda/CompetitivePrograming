using System;

class URI
{
    static void Main() {
        double valor, n=0;
        int positivos=0, i;
    
        for(i=1;i<=6;i++){
            valor = double.Parse(System.Console.ReadLine().Trim());
            if(valor>0){
                positivos++;
                n+=valor;
            }
        }
    
        Console.Write("{0} valores positivos\n{1:f1}\n", positivos, n/positivos);
        
    }
}