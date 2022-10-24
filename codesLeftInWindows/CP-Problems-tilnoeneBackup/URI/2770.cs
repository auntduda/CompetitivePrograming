using System;

class URI
{
    static void Main() {
        while(true) {
            string linha = Console.ReadLine();
            if (string.IsNullOrEmpty(linha)){
                break;
            }
            string[] ls = linha.Split(' ');

            int x = int.Parse(ls[0]), y = int.Parse(ls[1]), m = int.Parse(ls[2]);
            for(int i=0;i<m;i++){
                string l2 = Console.ReadLine();
                string[] ls2 = l2.Split(' ');
                int a = int.Parse(ls2[0]);
                int b = int.Parse(ls2[1]);
                if((a<=x && b<=y) || (b<=x && a<=y)){
                    Console.Write("Sim\n");
                } else{
                    Console.Write("Nao\n");
                }
            }
        }
    }
}
