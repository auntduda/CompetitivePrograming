using System;

class URI
{
    static void Main() {
        int n = int.Parse(System.Console.ReadLine().Trim()), i, j, x, y, soma;
        for(i=0;i<n;i++){
            string nums = System.Console.ReadLine().Trim();
            string[] ns = nums.Split(' ');
            x = int.Parse(ns[0]);
            y = int.Parse(ns[1]);
            if(x%2==0){
                x++;
            }
            soma=0;
            for(j=0;j<y;j++){
                soma+=x;
                x+=2;
            }
            Console.Write("{0}\n", soma);
        }
    }
}