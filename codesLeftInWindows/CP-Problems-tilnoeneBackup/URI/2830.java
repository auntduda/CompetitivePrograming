import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int[] v = new int[17];
        int i, a = 0, b = 0;
        
        a = ler.nextInt();
        b = ler.nextInt();
        
        if((a <= 8 && b >= 9) || (b <= 8 && a >= 9)){
            System.out.printf("final\n");
        } else if((a % 2 == 0 && b == a-1) || (b % 2 == 0 && a == b-1)){
            System.out.printf("oitavas\n");
        } else if((a <= 12 && b >= 13) || (a >= 13 && b <= 12) || (a <= 4 && b >= 5) || (a >= 5 && b <= 4)){
            System.out.printf("semifinal\n");
        } else{
            System.out.printf("quartas\n");
        }
    }
}