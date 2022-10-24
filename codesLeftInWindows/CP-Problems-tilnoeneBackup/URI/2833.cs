using System;

class URI
{
    static void Main() {
        while(true) {
            string linha = Console.ReadLine();
            if (string.IsNullOrEmpty(linha))
                break;
            string[] ls = linha.Split(' ');
            
            int a = 0, b = 0;
            for(int i = 0; i < 16; i++){
                if(ls[i] == "1") a = i+1;
                else if(ls[i] == "9") b = i+1;
            }
            
            if((a <= 8 && b >= 9) || (b <= 8 && a >= 9)){
                Console.Write("final\n");
            } else if((a % 2 == 0 && b == a-1) || (b % 2 == 0 && a == b-1)){
                Console.Write("oitavas\n");
            } else if((a <= 12 && b >= 13) || (a >= 13 && b <= 12) || (a <= 4 && b >= 5) || (a >= 5 && b <= 4)){
                Console.Write("semifinal\n");
            } else{
                Console.Write("quartas\n");
            }
        }
    }
}
