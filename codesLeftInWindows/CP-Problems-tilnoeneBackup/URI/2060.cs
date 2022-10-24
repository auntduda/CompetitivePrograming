using System;

class URI
{
    static void Main() {
        int n = int.Parse(System.Console.ReadLine().Trim()), m1=0, m2=0, m3=0, m4=0;
        string nums = System.Console.ReadLine().Trim();
        string[] ns = nums.Split(' ');
        for(int i=0;i<n;i++){
            int v = int.Parse(ns[i]);
            if(v%2==0){
                m1++;
            }
            if(v%3==0){
                m2++;
            }
            if(v%4==0){
                m3++;
            }
            if(v%5==0){
                m4++;
            }
        }
        Console.Write("{0} Multiplo(s) de 2\n", m1);
        Console.Write("{0} Multiplo(s) de 3\n", m2);
        Console.Write("{0} Multiplo(s) de 4\n", m3);
        Console.Write("{0} Multiplo(s) de 5\n", m4);
    }
}