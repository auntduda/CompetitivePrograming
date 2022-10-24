using System;

class URI
{
    static void Main() {
        int n = int.Parse(System.Console.ReadLine().Trim());
        int l=1, i;
        for(i=0;i<n;i++){
    		Console.Write("{0} {1} {2} PUM\n", l, l+1, l+2);
            l+=4;
        }
    }
}