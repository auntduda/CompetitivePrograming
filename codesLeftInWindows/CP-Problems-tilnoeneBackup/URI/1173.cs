using System;

class URI
{
    static void Main() {
        int i, v;
        v = int.Parse(System.Console.ReadLine().Trim());
        int ant = v;
        for(i=0;i<10;i++){
            if(i!=0){
                ant = ant*2;
            }
            Console.Write("N[{0}] = {1}\n", i, ant);
        }
    }
}