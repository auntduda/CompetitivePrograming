import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int n;
        n = ler.nextInt();
        String f = "LIFE IS NOT A PROBLEM TO BE SOLVED";
        char[] frase = f.toCharArray(); 
        
        for(int i=0;i<n;i++){
            System.out.printf("%c", frase[i]);
        }
        System.out.printf("\n");
    }
}