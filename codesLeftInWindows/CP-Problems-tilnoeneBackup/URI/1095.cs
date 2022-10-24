using System;

class URI
{
    static void Main() {
        int i=1, j;
        for(j=60;j>=0;j-=5){
    		Console.Write("I={0} J={1}\n", i, j);
            i+=3;
        }
    }
}