using System;

class URI
{
    static void Main() {
        while(true) {
            string linha = Console.ReadLine();
            if (string.IsNullOrEmpty(linha))
                break;
            string[] ls = linha.Split(' ');
            
            double a = double.Parse(ls[0]), b = double.Parse(ls[1]), c = double.Parse(ls[2]);
            
            double raiz = 2*(a*a*b*b+b*b*c*c+c*c*a*a)-(a*a*a*a + b*b*b*b + c*c*c*c);
            
            if(raiz > 0){
                Console.Write("{0:f3}\n", 1/3.0 * Math.Sqrt(raiz));
            } else{
                Console.Write("{0:f3}\n", -1.0);
            }
        }
    }
}
