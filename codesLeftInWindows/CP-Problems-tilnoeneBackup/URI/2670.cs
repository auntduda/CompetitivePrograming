using System;

class URI
{
    static int min(int a, int b){
        if(a > b){
            return b;
        } else{
            return a;
        }
    }
    
    static void Main() {
        int[] a = new int[3];
        int t1, t2, t3;
        a[0] = int.Parse(System.Console.ReadLine().Trim());
        a[1] = int.Parse(System.Console.ReadLine().Trim());
        a[2] = int.Parse(System.Console.ReadLine().Trim());
        
        t1 = a[1]*2+a[2]*4;
        t2 = a[0]*2+a[2]*2;
        t3 = a[0]*4+a[1]*2;
        
        Console.Write("{0}\n", min(min(t1, t2), t3));
    }
}