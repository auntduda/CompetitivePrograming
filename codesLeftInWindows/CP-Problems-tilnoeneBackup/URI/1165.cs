using System;

class URI
{
    static void Main() {
        int n, v, i, j;
        n = int.Parse(System.Console.ReadLine().Trim());
        for(j=0;j<n;j++){
            v = int.Parse(System.Console.ReadLine().Trim());
            int div=0;
            if(v==2){
                Console.Write("{0} eh primo\n", v);
            } else if(v==1){
                Console.Write("{0} nao eh primo\n", v);
            } else if(v%2==0){
                Console.Write("{0} nao eh primo\n", v);
            } else{
                for(i=3;i<v;i+=2){
                    if(v%i==0){
                        div=1;
                        break;
                    }
                }
                if(div==0){
                    Console.Write("{0} eh primo\n", v);
                } else{
                    Console.Write("{0} nao eh primo\n", v);
                }
            }
        }
    }
}