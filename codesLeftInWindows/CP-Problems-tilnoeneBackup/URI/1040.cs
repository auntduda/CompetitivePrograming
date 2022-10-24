using System;

class URI
{
    static void Main() {
        string a = System.Console.ReadLine().Trim();
        string[] nums = a.Split(' ');
        
        double n1=double.Parse(nums[0]), n2=double.Parse(nums[1]), n3=double.Parse(nums[2]), n4=double.Parse(nums[3]);
        double media = (n1*2+n2*3+n3*4+n4)/10.0;
        
        Console.Write("Media: {0:f1}\n", Math.Truncate(media*10)/10);
        if(media>=7){
            Console.Write("Aluno aprovado.\n");
        } else if(media<5){
            Console.Write("Aluno reprovado.\n");
        } else{
            Console.Write("Aluno em exame.\n");
            double n = double.Parse(System.Console.ReadLine().Trim());
            Console.Write("Nota do exame: {0:f1}\n", Math.Truncate(n*10)/10);
            media=(media+n)/2;
            if(media>5){
                Console.Write("Aluno aprovado.\n");
            } else{
                Console.Write("Aluno reprovado.\n");
            }
            Console.Write("Media final: {0:f1}\n", Math.Truncate(media*10)/10);
        }
        
    }
}