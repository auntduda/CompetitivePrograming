using System;

class URI
{
    static void Main() {
        int i, n = int.Parse(Console.ReadLine().Trim());
        for(i=0;i<n;i++){
            string linha = Console.ReadLine();
            if (string.IsNullOrEmpty(linha))
                break;
            string[] ls = linha.Split(' ');

            int r1 = int.Parse(ls[0]), r2 = int.Parse(ls[1]);

            Console.Write("{0}\n", r1+r2);
        }
    }
}
