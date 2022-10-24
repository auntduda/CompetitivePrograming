using System;

class URI
{
    static void Main() {
        while(true) {
            string linha = Console.ReadLine();
            if(string.IsNullOrEmpty(linha))
                break;

            int i, n = int.Parse(linha);
            double v, maior = double.Parse(System.Console.ReadLine().Trim());
            
            for(i=1;i<n;i++){
                v = double.Parse(System.Console.ReadLine().Trim());
                if(v<maior) maior=v;
            }
            Console.Write("{0:f2}\n", maior);

        }
    }
}
