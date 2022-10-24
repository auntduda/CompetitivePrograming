using System;

class URI
{
    static void Main() {
            int a = Int32.Parse(System.Console.ReadLine().Trim());
            int b = Int32.Parse(System.Console.ReadLine().Trim());
            
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
