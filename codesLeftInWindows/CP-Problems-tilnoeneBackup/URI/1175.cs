using System;

class URI
{
    static void Main() {
        int i;
        int[] n;
        n = new int[32];
        for(i=0;i<20;i++){
            n[i] = int.Parse(System.Console.ReadLine().Trim());
        }
        for(i=0;i<20;i++){
            Console.Write("N[{0}] = {1}\n", i, n[19-i]);
        }
    }
}