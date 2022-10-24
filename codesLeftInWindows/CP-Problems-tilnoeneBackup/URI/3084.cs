using System;

class URI
{
    static void Main() {
        while(true) {
            string linha = Console.ReadLine();
            if (string.IsNullOrEmpty(linha))
                break;
            string[] ls = linha.Split(' ');

            int h = int.Parse(ls[0])/30, m = int.Parse(ls[1])/6;

            if(h<10){
                Console.Write("0");
            }
            Console.Write("{0}:", h);
            if(m<10){
                Console.Write("0");
            }
            Console.Write("{0}\n", m);
        }
    }
}
