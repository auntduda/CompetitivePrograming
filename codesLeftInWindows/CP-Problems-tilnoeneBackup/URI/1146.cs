using System;

class URI
{
    static void Main() {
        int n;
        while(true){
            n = int.Parse(System.Console.ReadLine().Trim());
            string res = "";
            if(n==0){
                break;
            }
            for(int i=1;i<n;i++){
                res+=i+" ";
            }
            res+=n;
            Console.Write("{0}\n", res);
        }
        
    }
}