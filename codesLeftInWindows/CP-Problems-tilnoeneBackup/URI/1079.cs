using System;

class URI
{
    static void Main() {
        int n = int.Parse(System.Console.ReadLine().Trim());
        
        for(int i=0;i<n;i++){
            string nums = System.Console.ReadLine().Trim();
            string[] ns = nums.Split(' ');
            double a = double.Parse(ns[0]), b = double.Parse(ns[1]), c = double.Parse(ns[2]);
            Console.Write("{0:f1}\n", (a*2+b*3+c*5)/10);
        }
    
    }
}