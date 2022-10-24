using System;

class URI
{
    static void Main() {
        int a, pos=0, neg=0, par=0, imp=0;
        for(int i=0;i<5;i++){
            a = int.Parse(System.Console.ReadLine().Trim());
            if(a>0){
                pos++;
            } else if(a<0){
                neg++;
            }
            if(a%2==0){
                par++;
            } else{
                imp++;
            }
        }
        Console.Write("{0} valor(es) par(es)\n", par);
        Console.Write("{0} valor(es) impar(es)\n", imp);
        Console.Write("{0} valor(es) positivo(s)\n", pos);
        Console.Write("{0} valor(es) negativo(s)\n", neg);
    }
}