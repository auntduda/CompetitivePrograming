using System;

class URI
{
    static void Main() {
        int i;
        for(i=1;i<=9;i+=2){
    		Console.Write("I={0} J={1}\n", i, i+6);
    		Console.Write("I={0} J={1}\n", i, i+5);
    		Console.Write("I={0} J={1}\n", i, i+4);
        }
    }
}