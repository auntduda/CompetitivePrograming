using System;

class URI
{
    static void Main() {
        
        int x, y;
        while(true){
            string n = System.Console.ReadLine().Trim();
            string[] ns = n.Split(' ');
            x = int.Parse(ns[0]);
            y = int.Parse(ns[1]);
            if(x==y){
                break;
            }
            if(x>y){
                Console.Write("Decrescente\n");
            } else{
                Console.Write("Crescente\n");
            }
        }
    
    }
}