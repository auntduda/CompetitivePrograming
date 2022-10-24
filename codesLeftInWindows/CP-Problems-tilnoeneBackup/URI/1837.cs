using System;

class URI
{
    static void Main() {
        string nums = System.Console.ReadLine().Trim();
        string[] ns = nums.Split(' ');
        int a = int.Parse(ns[0]), b = int.Parse(ns[1]);
        int q = a/b, r = a%b;
        
        if(r<0){
            if(q<0) q--;
            else if(q>0) q++;
            else{
                if(a-((q-1)*b)>=0){
                    q--;
                } else{
                    q++;
                }
            }
            r = a-(q*b);
        }
        
        Console.Write("{0} {1}\n", q, r);
    }
}