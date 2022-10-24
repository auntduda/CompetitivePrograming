using System;

class URI
{
    static void Main() {
        int n = int.Parse(System.Console.ReadLine().Trim()), x, y, si, temp, i, j;
        for(i=0;i<n;i++){
            string s = System.Console.ReadLine().Trim();
            string[] ns = s.Split(' ');
            x = int.Parse(ns[0]);
            y = int.Parse(ns[1]);
            si=0;
            if(x>y){
                temp=x;
                x=y;
                y=temp;
            }
    
            if(x%2==0){
                x++;
            } else{
                x+=2;
            }
            for(j=x;j<y;j+=2){
                si+=j;
            }
            Console.Write("{0}\n", si);
        }
    }
}