using System;

class URI
{
    static void Main() {
        int r, g, b, n, res;
        n = int.Parse(System.Console.ReadLine().Trim());
        for(int i=0;i<n;i++){
            string e;
            e = System.Console.ReadLine().Trim();
            string nums = System.Console.ReadLine().Trim();
            string[] ns = nums.Split(' ');
            r = int.Parse(ns[0]);
            g = int.Parse(ns[1]);
            b = int.Parse(ns[2]);
            if(e=="min"){
               if(r<g){
                    if(r<b){
                        res = r;
                    } else{
                        res = b;
                    }
                } else{
                    if(g<b){
                        res = g;
                    } else{
                        res = b;
                    }
                }
            } else if(e=="mean"){
                res = (int)((r+g+b)/3);
            } else if(e=="max"){
                if(r>g){
                    if(r>b){
                        res = r;
                    } else{
                        res = b;
                    }
                } else{
                    if(g>b){
                        res = g;
                    } else{
                        res = b;
                    }
                }
            } else{
                res = (int)((0.3*r)+(0.59*g)+(0.11*b));
            }
            Console.Write("Caso #{0}: {1}\n", i+1, res);
        }
    }
}