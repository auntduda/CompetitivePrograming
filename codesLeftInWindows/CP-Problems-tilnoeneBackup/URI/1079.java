import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
    
        int n = ler.nextInt();
        
        for(int i=0;i<n;i++){
            double a = ler.nextDouble(), b = ler.nextDouble(), c = ler.nextDouble();
            System.out.printf("%.1f\n", (a*2+b*3+c*5)/10);
        }
        
    }
}