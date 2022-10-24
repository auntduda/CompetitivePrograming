using System;

class URI
{
    static void Main() {
        while(true) {
            string linha = Console.ReadLine();
            if (string.IsNullOrEmpty(linha))
                break;
            string[] ls = linha.Split(' ');
            
            int xa, ya, xb, yb, cxa, cya, cxb, cyb;
            
            int l = int.Parse(ls[0]), c = int.Parse(ls[1]), ra = int.Parse(ls[2]), rb = int.Parse(ls[3]);
            
            if(l == 0 && c == 0 && ra == 0 && rb == 0) break;

            cxa = ra;
            cya = c-ra;
            
            cxb = l-rb;
            cyb = rb;
            
            if(ra*2 <= l && ra*2 <= c && rb*2 <= l && rb*2 <= c){
                if((cxa - cxb) * (cxa - cxb) + (cya - cyb) * (cya - cyb)  >= (ra + rb) * (ra + rb)) Console.Write("S\n");
                else Console.Write("N\n");
            } else Console.Write("N\n");
        }
    }
}
