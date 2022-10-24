import java.io.*;
import java.util.Scanner;

public class Main {
    public static void main(String args[]) throws IOException{
        Scanner ler = new Scanner(System.in);
        String orit = ler.nextLine();
        
        int i;
        
        char[] ori = new char[orit.length()]; 
        for (i = 0; i < orit.length(); i++) { 
            ori[i] = orit.charAt(i); 
        }
        
        int k = ler.nextInt();

        int ig = 0, pos = 0;
        for(i = 0; i < 5; i++){
            String ft = ler.nextLine();

            char[] f = new char[ft.length()]; 
            for (int j = 0; j < ft.length(); j++) { 
                f[j] = ft.charAt(j); 
            }

            int temp = 0;
            for(int j = 0; j < ft.length(); j++){
                if(f[j] == ori[j]){
                    temp += 1;
                }
            }
            
            if(temp > ig){
                ig = temp;
                pos = i;
            }

        }
        
        if(orit.length() - ig > k) System.out.printf("-1\n");
        else{
            System.out.printf("%d\n", pos);
            System.out.printf("%d\n", orit.length() - ig);
        }
    }
}