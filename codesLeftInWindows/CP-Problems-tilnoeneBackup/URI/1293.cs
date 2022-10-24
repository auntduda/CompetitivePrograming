using System;

class URI
{
    static void Main() {
        while(true) {
            string linha = Console.ReadLine();
            if (string.IsNullOrEmpty(linha))
                break;
            string[] ls = linha.Split(' ');

            double xa = double.Parse(ls[0]), ya = double.Parse(ls[1]), xb = double.Parse(ls[2]), yb = double.Parse(ls[3]), cmd = double.Parse(ls[4]), enf = double.Parse(ls[5]);
            
            double ab = Math.Sqrt((xa - xb)*(xa - xb) + (ya - yb)*(ya - yb));
            
            cmd = (cmd * 3.14159265358979323846264338327950288419716939937510) / 180;
            enf = (enf * 3.14159265358979323846264338327950288419716939937510) / 180;
            
            Console.Write("{0:f3}\n", ab * (1/Math.Tan(cmd) + 1/Math.Tan(enf)));
        }
    }
}
