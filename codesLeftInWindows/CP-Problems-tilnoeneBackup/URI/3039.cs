using System;

class URI
{
    static void Main() {
        int n, h=0, m=0, i;
        
        n = int.Parse(System.Console.ReadLine().Trim());
        for(i=0;i<n;i++){
            string ns = System.Console.ReadLine().Trim();
            string[] sexo = ns.Split(' '); 
            if(sexo[1]=="F") m+=1;
            else h+=1;
        }
        Console.Write("{0} carrinhos\n{1} bonecas\n", h, m);
        
    }
}