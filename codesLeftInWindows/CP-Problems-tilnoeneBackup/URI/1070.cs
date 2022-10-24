using System;

class URI
{
    static void Main() {
        int n = int.Parse(System.Console.ReadLine().Trim());
        if(n%2==0){
            n+=1;
        }
        for(int i=n;i<n+12;i+=2){
            Console.Write("{0}\n", i);
        }
        
    }
}