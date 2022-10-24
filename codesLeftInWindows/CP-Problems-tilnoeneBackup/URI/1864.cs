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
            string frase = "LIFE IS NOT A PROBLEM TO BE SOLVED";
            int i;
            for(i = 0; i < n; i++){
                Console.Write("{0}", frase[i]);
            }
            Console.Write("\n");
        }
    }
}
