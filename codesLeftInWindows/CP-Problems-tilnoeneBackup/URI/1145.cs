using System;

class URI
{
    static void Main() {
        string n = System.Console.ReadLine().Trim();
        string[] ns = n.Split(' ');
        int x = int.Parse(ns[0]), y = int.Parse(ns[1]);

        for(int i=1;i<=y;i++){
            Console.Write("{0}", i);
            if(i%x==0 || i==y){
                Console.Write("\n");
            } else{
                Console.Write(" ");
            }
        }
    }
}