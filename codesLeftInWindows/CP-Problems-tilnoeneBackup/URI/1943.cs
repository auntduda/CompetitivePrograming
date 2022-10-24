using System;

class URI
{
    static void Main() {
        while(true) {
            string linha = Console.ReadLine();
            if (string.IsNullOrEmpty(linha))
                break;
            string[] ls = linha.Split(' ');

            int n = int.Parse(ls[0]);
            
            Console.Write("Top ");
            if(n <= 1) Console.Write("1\n");
            else if(n <= 3) Console.Write("3\n");
            else if(n <= 5) Console.Write("5\n");
            else if(n <= 10) Console.Write("10\n");
            else if(n <= 25) Console.Write("25\n");
            else if(n <= 50) Console.Write("50\n");
            else Console.Write("100\n");
            
        }
    }
}
