using System;

class URI
{
    static void Main() {
        while(true) {
            string linha = Console.ReadLine();
            if (string.IsNullOrEmpty(linha))
                break;

            int n = int.Parse(linha);

            Console.Write("{0:f0}\n", Math.Ceiling(n/100.0));
        }
    }
}
