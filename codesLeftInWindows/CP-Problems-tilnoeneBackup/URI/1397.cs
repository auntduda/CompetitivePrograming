using System;

class URI
{
    static void Main() {
        while(true) {
            string linha1 = Console.ReadLine();
            if (string.IsNullOrEmpty(linha1))
                break;
            
            int n = int.Parse(linha1), a = 0, b = 0;
            
            if(n == 0) break;
            
            for(int i = 0; i < n; i++){
                string linha = Console.ReadLine();
                string[] ls = linha.Split(' ');
                
                int v1 = int.Parse(ls[0]), v2 = int.Parse(ls[1]);
                
                if(v1 > v2) a++;
                else if(v1 < v2) b++;
                
            }

            Console.Write("{0} {1}\n", a, b);
        }
    }
}
