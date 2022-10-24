using System;

class URI
{
    static void Main() {
        while(true) {
            string linha = Console.ReadLine();
            if (string.IsNullOrEmpty(linha))
                break;
            string[] ls = linha.Split(' ');

            double a = double.Parse(ls[0]), b = double.Parse(ls[1]);

            Console.Write("{0:f2}%\n", (b*100)/a-100);
        }
    }
}
