using System;

class URI
{
    static void Main() {
        while(true) {
            string linha = Console.ReadLine();
            if (string.IsNullOrEmpty(linha)){
                break;
            }
            int n = int.Parse(linha), op=1, num=1;

            while(num%n!=0){
                num = (10*num+1)%n;
                op++;
            }
            Console.Write("{0}\n", op);
        }
    }
}
