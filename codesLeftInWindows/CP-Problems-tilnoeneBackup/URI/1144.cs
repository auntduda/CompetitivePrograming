using System;

class URI
{
    static void Main() {
        int n = int.Parse(System.Console.ReadLine().Trim()), i;
        for(i=1;i<=n;i++){
            Console.Write("{0} {1} {2}\n", i, i*i, i*i*i);
            Console.Write("{0} {1} {2}\n", i, i*i+1, i*i*i+1);
        }
    }
}