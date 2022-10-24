using System;

class URI
{
    static void Main() {
        int n, x, d, maria, joao, i, j;
        n = int.Parse(System.Console.ReadLine().Trim());
        for(i=0;i<n;i++){
            maria = 0;
            joao = 0;
            for(j=0;j<3;j++){
                string nums = System.Console.ReadLine().Trim();
                string[] ls = nums.Split(' ');
                x = int.Parse(ls[0]);
                d = int.Parse(ls[1]);
                joao+=x*d;
            }
            for(j=3;j<6;j++){
                string nums = System.Console.ReadLine().Trim();
                string[] ls = nums.Split(' ');
                x = int.Parse(ls[0]);
                d = int.Parse(ls[1]);
                maria+=x*d;
            }
            if(joao>maria){
                Console.Write("JOAO\n");
            } else{
                Console.Write("MARIA\n");
            }
        }
    }
}