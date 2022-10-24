using System;

class URI
{
    static void Main() {
        while(true) {
            string linha = Console.ReadLine();
            if (string.IsNullOrEmpty(linha) || linha == "0")
                break;
            string[] ls = linha.Split(' ');

            int q = int.Parse(ls[0]), d = int.Parse(ls[1]), p = int.Parse(ls[2]);
            
            int pg = (q*d*p)/(p-q);
            Console.Write("{0}", pg);
            
            if(pg == 1) Console.Write(" pagina\n");
            else Console.Write(" paginas\n"); 

        }
    }
}
