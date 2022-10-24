using System;

class URI
{
    static void Main() {
        double a, b=2, c, soma=1.0;
        for(a=3;a<=39;a+=2){
            c=a/b;
            soma+=c;
            b*=2;
        }
    	Console.Write("{0:f2}\n", soma);

    }
}