using System;

class URI
{
    static void Main() {
        while(true) {
            string linha = Console.ReadLine();
            if (string.IsNullOrEmpty(linha))
                break;
            string[] ls = linha.Split(' ');

            int a = int.Parse(ls[0]), b = int.Parse(ls[1]);

            if(b >= 0 && b <= 2) Console.Write("nova\n");
            else if(b >= 97 && b <= 100) Console.Write("cheia\n");
            else{
                if(a > b) Console.Write("minguante\n");
                else Console.Write("crescente\n");
            }
            
        }
    }
}
