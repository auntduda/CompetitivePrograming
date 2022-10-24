using System;

class URI
{
    static void Main() {
        int val = 0;
        for(int i=0;i<6;i++){
            double n = double.Parse(System.Console.ReadLine().Trim());
            if(n>0){
                val++;
            }
        }
        Console.Write("{0} valores positivos\n", val);
    }
}