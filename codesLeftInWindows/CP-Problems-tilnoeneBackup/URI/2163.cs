using System;

class URI
{
    static void Main() {
        int n, m;
        int[,] ter = new int[1024, 1024];
        string nums = System.Console.ReadLine().Trim();
        string[] ns = nums.Split(' ');
        n = int.Parse(ns[0]);
        m = int.Parse(ns[1]);
        for(int i=0;i<n;i++){
            string linha = System.Console.ReadLine().Trim();
            string[] ls = linha.Split(' ');
            for(int j=0;j<m;j++){
                ter[i, j] = int.Parse(ls[j]);
            }
        }
        for(int i=1;i<n-1;i++){
            for(int j=1;j<m-1;j++){
                if(ter[i, j]==42 && ter[i-1, j-1]==7 && ter[i-1, j]==7 && ter[i-1, j+1]==7 && ter[i, j-1]==7 && ter[i, j+1]==7 && ter[i+1, j-1]==7 && ter[i+1, j]==7 && ter[i+1, j+1]==7){
                    Console.Write("{0} {1}\n", i+1, j+1);
                    return;
                }
            }
        }
        Console.Write("0 0\n");
    }
}