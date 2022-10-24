using System;

class URI
{
    static void Main() {
        int x = int.Parse(System.Console.ReadLine().Trim()), y = int.Parse(System.Console.ReadLine().Trim()), i, temp;
        if(x>y){
            temp=x;
            x=y;
            y=temp;
        }
        if(x%2==0){
            x++;
        } else{
            x+=2;
        }
        int soma=0;
        for(i=x;i<y;i+=2){
            soma+=i;
        }
        Console.Write("{0}\n", soma);
    }
}