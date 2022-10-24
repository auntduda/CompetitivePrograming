using System;

class URI
{
    static void Main() {
        int i, n;
        n = int.Parse(System.Console.ReadLine().Trim());
        string linha = System.Console.ReadLine().Trim();
        string[] nums = linha.Split(' ');
        int menor = int.Parse(nums[0]), pos=1;
        for(i=1;i<n;i++){
            if(int.Parse(nums[i])<menor){
                menor = int.Parse(nums[i]);
                pos=i;
            }
        }
        Console.Write("Menor valor: {0}\n", menor);
        Console.Write("Posicao: {0}\n", pos);

    }
}