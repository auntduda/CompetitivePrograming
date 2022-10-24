using System;

class URI
{
    static void Main() {
        int t, v, i;
        while(true){
            t = int.Parse(System.Console.ReadLine().Trim());
            if(t==0) break;
            for(i=0;i<t;i++){
                v = int.Parse(System.Console.ReadLine().Trim());
                if(v%2==0) Console.Write("{0}\n", (v-1)*2);
                else Console.Write("{0}\n", (v*2-1));
            }
        }
    }
}