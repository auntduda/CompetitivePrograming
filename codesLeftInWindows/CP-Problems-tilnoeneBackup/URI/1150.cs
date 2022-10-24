using System;

class URI
{
    static void Main() {
        int x, z, soma=0, i=0;
        x = int.Parse(System.Console.ReadLine().Trim());
        while(true){
            z = int.Parse(System.Console.ReadLine().Trim());
            if(z>x){
                break;
            }
        }
        while(soma<z){
            soma+=i+x;
            i++;
        }
        Console.Write("{0}\n", i);
        
    }
}