using System;

class URI
{
    static void Main() {
        int n, i, a=0, elf=0, h=0, m=0, x=0;
        string nome, e;
        n = int.Parse(System.Console.ReadLine().Trim());
        for(i=0;i<n;i++){
            nome = System.Console.ReadLine().Trim();
            string[] linha = nome.Split(' ');
            e = linha[1];
            if(e=="A") a++;
            else if(e=="E") elf++;
            else if(e=="H") h++;
            else if(e=="M") m++;
            else x++;
        }
        Console.Write("{0} Hobbit(s)\n", x);
        Console.Write("{0} Humano(s)\n", h);
        Console.Write("{0} Elfo(s)\n", elf);
        Console.Write("{0} Anao(s)\n", a);
        Console.Write("{0} Mago(s)\n", m);
    }
}