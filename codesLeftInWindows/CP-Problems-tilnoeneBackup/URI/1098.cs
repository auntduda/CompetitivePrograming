using System;

class URI
{
    static void Main() {
        double i;
    	int k=0;
        for(i=0;i<=2;i+=0.2){
    		if(k==0 || k==5 || k==10){
    			Console.Write("I={0:f0} J={1:f0}\n", i, i+1);
    			Console.Write("I={0:f0} J={1:f0}\n", i, i+2);
    			Console.Write("I={0:f0} J={1:f0}\n", i, i+3);
    		} else{
    			Console.Write("I={0:f1} J={1:f1}\n", i, i+1);
    			Console.Write("I={0:f1} J={1:f1}\n", i, i+2);
    			Console.Write("I={0:f1} J={1:f1}\n", i, i+3);
    		}
    		k++;
        }
    }
}