using System;

class URI
{
    static void Main() {
        
        int i, n;
        double x, y;
        n = int.Parse(System.Console.ReadLine().Trim());
        
        for(i=0;i<n;i++){
            string na = System.Console.ReadLine().Trim();
            string[] ns = na.Split(' ');
            x = double.Parse(ns[0]);
            y = double.Parse(ns[1]);
            if(y==0){
                Console.Write("divisao impossivel\n");
            } else{
                Console.Write("{0:f1}\n", x/y);
            }
        }
    
    }
}