using System;

class URI
{
    static void Main() {
        while(true) {
            string linha = Console.ReadLine();
            if (string.IsNullOrEmpty(linha))
                break;
            string[] ls = linha.Split(' ');

            int xf = int.Parse(ls[0]), yf = int.Parse(ls[1]), xi = int.Parse(ls[2]), yi = int.Parse(ls[3]), vi = int.Parse(ls[4]), r1 = int.Parse(ls[5]), r2 = int.Parse(ls[6]);
            double x = (xf-xi)*(xf-xi), y=(yf-yi)*(yf-yi);
            if(Math.Sqrt(x+y)+vi*1.5>r1+r2){
                Console.Write("N\n");
            } else{
                Console.Write("Y\n");
            }
        }
    }
}
