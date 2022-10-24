using System;

class URI
{
    static void Main() {
        int t, pa, pb, anos, i;
        double g1, g2;
        t = int.Parse(System.Console.ReadLine().Trim());
        for(i=0;i<t;i++){
            string linha = System.Console.ReadLine().Trim();
            string[] ns = linha.Split(' ');
            pa = int.Parse(ns[0]);
            pb = int.Parse(ns[1]);
            g1 = double.Parse(ns[2]);
            g2 = double.Parse(ns[3]);

            anos=0;
            while(true){
                if(anos>100 || pa>pb){
                    break;
                }
                pa+=Convert.ToInt32(Math.Floor(pa*g1/100));
                pb+=Convert.ToInt32(Math.Floor(pb*g2/100));
                anos++;
            }
            if(anos>100){
                Console.Write("Mais de 1 seculo.\n");
            } else{
                Console.Write("{0} anos.\n", anos);
            }
        }
    }
}