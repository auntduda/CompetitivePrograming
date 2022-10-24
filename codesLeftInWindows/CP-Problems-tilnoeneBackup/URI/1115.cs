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
            if(x==0 || y==0){
                break;
            }
            if(x>0){
                if(y>0){
    				Console.Write("primeiro\n");
                } else{
    				Console.Write("quarto\n");
                }
            } else{
                if(y>0){
    				Console.Write("segundo\n");
                } else{
                    Console.Write("terceiro\n");
                }
            }
        }
    
    }
}