using System;

class URI
{
    static void Main() {
        double soma=0, divisao, i;
        for(i=1;i<=100;i++){
            divisao=1/i;
            soma+=divisao;
        }
    	Console.Write("{0:f2}\n", soma);

    }
}