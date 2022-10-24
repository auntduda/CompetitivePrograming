import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        double a, b;
        a = ler.nextDouble();
        b = ler.nextDouble();
        
        System.out.printf("%.2f%%\n", (b*100)/a-100);
    }
}