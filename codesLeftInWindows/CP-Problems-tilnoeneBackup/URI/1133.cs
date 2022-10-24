using System;

class URI
{
    static void Main() {
        int i, x = int.Parse(System.Console.ReadLine().Trim()), y = int.Parse(System.Console.ReadLine().Trim());

		if(x>y){
            int temp=x;
            x=y;
            y=temp;
        }
        for(i=x+1;i<y;i++){
            if(i%5==2 || i%5==3){
                Console.Write("{0}\n", i);
            }
        }
    }
}