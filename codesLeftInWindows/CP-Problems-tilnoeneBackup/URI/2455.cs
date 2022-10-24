using System;

class URI
{
    static void Main() {
        while(true) {
            string linha = Console.ReadLine();
            if (string.IsNullOrEmpty(linha))
                break;
            string[] ls = linha.Split(' ');

            double a = double.Parse(ls[0]), b = double.Parse(ls[1]), c = double.Parse(ls[2]), d = double.Parse(ls[3]);
            
            if(a*b == c*d){ 
                Console.Write("0\n");
            } else if(a*b < c*d){ 
                Console.Write("1\n");
            } else{ 
                Console.Write("-1\n");
            }
        }
    }
}
