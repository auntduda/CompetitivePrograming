using System;

class URI
{
    static void Main() {

        string linha = Console.ReadLine();
        
        string[] ls = linha.Split(' ');
        
        int a = int.Parse(ls[0]), b = int.Parse(ls[1]), c = int.Parse(ls[2]); 
        
        bool feliz=false;
        
        if(a>b && b<=c) feliz=true;
        else if(b>a && c>b && c-b>=b-a) feliz=true;
        else if(a>b && b>c && b-c<a-b) feliz=true;
        else if(a==b && c>b) feliz=true;
        
        if(feliz) Console.Write(":)\n");
        else Console.Write(":(\n");
    }
}