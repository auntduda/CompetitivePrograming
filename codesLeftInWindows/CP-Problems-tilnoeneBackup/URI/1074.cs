using System;

class URI
{
    static void Main() {
        int n = int.Parse(System.Console.ReadLine().Trim()), x;

        for(int i=0;i<n;i++){
            x = int.Parse(System.Console.ReadLine().Trim());
            if(x==0){
                Console.Write("NULL\n");
            } else{
                if(x%2==0){
                    Console.Write("EVEN ");
                } else{
                    Console.Write("ODD ");
                }
                if(x>0){
                    Console.Write("POSITIVE\n");
                } else{
                    Console.Write("NEGATIVE\n");
                }
            }
        }
    }
}