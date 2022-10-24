using System;

class URI
{
    static void Main() {
        int n = int.Parse(System.Console.ReadLine().Trim());
        
        for(int i=1;i<=10;i++){
            Console.Write("{0} x {1} = {2}\n", i, n, i*n);
        }
    }
}