using System;

class URI
{
    static void Main() {
        int i, k=0, v;
        v = int.Parse(System.Console.ReadLine().Trim());
        for(i=0;i<1000;i++){
            Console.Write("N[{0}] = {1}\n", i, k);
            if(k==v-1){
                k=0;
            } else{
                k++;
            }
        }
    }
}