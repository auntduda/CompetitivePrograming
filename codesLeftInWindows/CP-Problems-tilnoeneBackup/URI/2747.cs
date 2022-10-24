using System;

class URI
{
    static void Main() {
        int i;
        for(i=0;i<39;i++){
            Console.Write("-");
        }
        Console.Write("\n");
        for(i=0;i<5;i++){
            Console.Write("|");
            int j;
            for(j=0;j<37;j++){
                Console.Write(" ");
            }
            Console.Write("|\n");
        }
        
        for(i=0;i<39;i++){
            Console.Write("-");
        }
        Console.Write("\n");
    }
}