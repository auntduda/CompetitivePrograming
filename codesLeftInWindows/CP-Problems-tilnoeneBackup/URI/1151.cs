using System;

class URI
{
    static void Main() {
        int i, n, a1, a2, soma;
        int[] fib = new int[64];
        fib[0] = 0;
        fib[1] = 1;
        n = int.Parse(System.Console.ReadLine().Trim());
        for(i=2;i<n;i++){
            fib[i]=fib[i-1]+fib[i-2];
        }
        for(i=0;i<n;i++){
            Console.Write(fib[i]);
            if(i==n-1){
                Console.Write("\n");
            } else{
                Console.Write(" ");
            }
        }
        
    }
}