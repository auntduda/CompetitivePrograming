using System;

class URI
{
    static void Main() {
        while(true) {
            string frase = Console.ReadLine();
            if (string.IsNullOrEmpty(frase))
                break;
            
            for(int i = 0; i < frase.Length; i++){
                if(frase[i] == '@') Console.Write("a");
                else if(frase[i] == '&') Console.Write("e");
                else if(frase[i] == '!') Console.Write("i");
                else if(frase[i] == '*') Console.Write("o");
                else if(frase[i] == '#') Console.Write("u");
                else Console.Write("{0}", frase[i]);
            }
            Console.Write("\n");
        }
    }
}
