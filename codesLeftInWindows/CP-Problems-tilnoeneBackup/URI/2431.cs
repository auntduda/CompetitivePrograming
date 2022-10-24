using System;

class URI
{
    static int min(int a, int b) {
        if(a < b) return a;
        return b;
    }
    
    static bool dentro(int x, int y, int a, int b){
        if(x <= a && y <= b) return true;
        return false;
    }
    
    static void Main() {

        string linha = Console.ReadLine();
            
        string[] ls = linha.Split(' ');
            
        int a1 = int.Parse(ls[0]), b1 = int.Parse(ls[1]), a2 = int.Parse(ls[2]), b2 = int.Parse(ls[3]), a = int.Parse(ls[4]), b = int.Parse(ls[5]);
        bool ans = false;
        int c1x = b1 + a2;
        int c1y = min(a1, b2);
        
        if(dentro(a, b, a1, b1) || dentro(b, a, a1, b1) || dentro(a, b, a2, b2) || dentro(b, a, a2, b2)){
            Console.Write("S\n");
            ans = true;
        } else if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
            Console.Write("S\n");
            ans = true;
        } else{
            c1x = a1 + b2;
            c1y = min(b1, a2);
            
            if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
                Console.Write("S\n");
                ans = true;
            }
            
            c1x = a1 + a2;
            c1y = min(b1, b2);
            
            if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
                Console.Write("S\n");
                ans = true;
            }
            
            c1x = b1 + b2;
            c1y = min(a1, a2);
            
            if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
                Console.Write("S\n");
                ans = true;
            }
            
        }
        
        if(!ans) Console.Write("N\n");
    }

}
