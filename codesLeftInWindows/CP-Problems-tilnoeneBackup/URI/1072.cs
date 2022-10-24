using System;

class URI
{
    static void Main() {
        int n = int.Parse(System.Console.ReadLine().Trim()), v, vin=0, vout=0, i;
    
        for(i=0;i<n;i++){
            v = int.Parse(System.Console.ReadLine().Trim());
            if(v>=10 && v<=20){
                vin++;
            } else{
                vout++;
            }
        }
        Console.Write("{0} in\n", vin);
        Console.Write("{0} out\n", vout);
    }
}