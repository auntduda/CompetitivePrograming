using System;

class URI
{
    static void Main() {
        string a = Console.ReadLine();

        if(a.Length > 140){
            Console.Write("MUTE\n");
        } else{
            Console.Write("TWEET\n");
        }
    }
}
