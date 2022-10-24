using System;

class URI
{
    static void Main() {
        int i, n, a, b, c;
        n = int.Parse(System.Console.ReadLine().Trim());
        for(i=0;i<n;i++){
            string nums = System.Console.ReadLine().Trim();
            string[] ns = nums.Split(' ');
            a = int.Parse(ns[0]);
            b = int.Parse(ns[1]);
            c = int.Parse(ns[2]);
            if(a>=200 && a<=300 && b>=50 && c>=150){
                Console.Write("Sim\n");
            } else{
                Console.Write("Nao\n");
            }
        }
    }
}