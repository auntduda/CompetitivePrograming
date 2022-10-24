using System;

class URI
{
    static void Main() {
        int i, v;
        for(i=0;i<10;i++){
            v = int.Parse(System.Console.ReadLine().Trim());
            if(v<=0){
                v=1;
            }
            Console.Write("X[{0}] = {1}\n", i, v);
        }
    }
}