using System;

class URI
{
    static void Main() {
        string ori = Console.ReadLine();
            
        int i, k = int.Parse(Console.ReadLine());
        int ig = 0, pos = 0;
            
        for(i = 0; i < 5; i++){
            
            string f = Console.ReadLine();
            
            int temp = 0;
            for(int j = 0; j < f.Length; j++){
                if(f[j] == ori[j]){
                    temp += 1;
                }
            }
            
            if(temp > ig){
                ig = temp;
                pos = i+1;
            }
            
        }
        
        if(ori.Length - ig > k) Console.Write("-1\n");
        else{
            Console.Write("{0}\n", pos);
            Console.Write("{0}\n", ori.Length - ig);
        }
        
    }
}
