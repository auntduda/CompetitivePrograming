using System;

class URI
{
    static void Main() {
        int i;
        double v;
        for(i=0;i<100;i++){
            v = double.Parse(System.Console.ReadLine().Trim());
            if(v<=10){
                Console.Write("A[{0}] = {1:f1}\n", i, v);
            }
        }
    }
}