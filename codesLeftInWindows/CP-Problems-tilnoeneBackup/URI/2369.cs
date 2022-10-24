using System;

class URI
{
    static void Main() {
        
        int n = int.Parse(Console.ReadLine().Trim());
        int tot = 7;
        
        if(n >= 101){
            tot += (n-100)*5;
            n = 100;
        }
        
        if(n >= 31){
            tot += (n-30)*2;
            n = 30;
        }
        
        if(n >= 11){
            tot += (n-10);
            n = 10;
        }
        
        Console.Write("{0}\n", tot);
    }
}
