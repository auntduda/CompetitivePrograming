using System;

class URI
{
    static void Main() {
        int n, x, y, cx, cy, i;
        while(true){
            n = int.Parse(System.Console.ReadLine().Trim());
            if(n==0) break;
            string linha = Console.ReadLine();
            string[] ls = linha.Split(' ');
            cx = int.Parse(ls[0]);
            cy = int.Parse(ls[1]);

            for(i=0;i<n;i++){
                string linha2 = Console.ReadLine();
                string[] ls2 = linha2.Split(' ');
                x = int.Parse(ls2[0]);
                y = int.Parse(ls2[1]);

                if(x==cx || y==cy) Console.Write("divisa\n");
                else if(x>cx){
                    if(y>cy) Console.Write("NE\n");
                    else Console.Write("SE\n");
                } else{
                    if(y>cy) Console.Write("NO\n");
                    else Console.Write("SO\n");
                }
            }
        }

    }
}