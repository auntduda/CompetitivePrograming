using System;

class URI
{
    static void Main() {
        int a, b, c;
        while(true){
            string nums = System.Console.ReadLine().Trim();
            string[] ns = nums.Split(' ');
            a = int.Parse(ns[0]);
            if(a==0){
                break;
            }
            b = int.Parse(ns[1]);
            c = int.Parse(ns[2]);
            Console.Write("{0}\n", Math.Floor(Math.Sqrt((a*b)*(100.0/c))));
        }
    }
}