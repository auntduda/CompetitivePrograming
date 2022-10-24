using System;

class URI
{
    static void Main() {
        while(true) {
            string pal = Console.ReadLine();
            if (string.IsNullOrEmpty(pal)){
                break;
            }

            if(pal=="esquerda") Console.Write("ingles\n");
            else if(pal=="direita") Console.Write("frances\n");
            else if(pal=="nenhuma") Console.Write("portugues\n");
            else Console.Write("caiu\n");
        }
    }
}
