using System;

class URI
{
    static void Main() {
        while(true) {
            string linha = Console.ReadLine();
            if (string.IsNullOrEmpty(linha))
                break;
            string[] ls = linha.Split(' ');

            double r1 = double.Parse(ls[0]), x1 = double.Parse(ls[1]), y1 = double.Parse(ls[2]), r2 = double.Parse(ls[3]), x2 = double.Parse(ls[4]), y2 = double.Parse(ls[5]);
            
            double d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);

            if(d <= r1*r1 && Math.Sqrt(d)+r2 <= r1) Console.Write("RICO\n");
            else Console.Write("MORTO\n");

        }
    }
}
