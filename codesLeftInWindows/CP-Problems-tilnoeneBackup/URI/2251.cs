using System;

class URI
{
    static void Main() {
        int i = 1;
        while(true) {
            int n = Int32.Parse(System.Console.ReadLine().Trim());
            if(n == 0) break;
            
            Console.Write("Teste {0}\n", i);
            Console.Write("{0:f0}\n", Math.Pow(2, n)-1);
            Console.Write("\n");
            
            i++;
            
        }
    }
}
