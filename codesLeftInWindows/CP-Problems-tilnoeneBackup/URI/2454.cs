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
            
            if(a == 0) Console.Write("C\n");
            else{
                if(b == 0) Console.Write("B\n");
                else Console.Write("A\n");
            }
            
        }
    }
}
