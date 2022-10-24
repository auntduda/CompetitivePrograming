using System;

class URI
{
    static void Main() {
        int i, j;
        for(i=1;i<=9;i+=2){
            for(j=7;j>=5;j--){
                Console.Write("I={0} J={1}\n", i, j);
            }
        }
    }
}