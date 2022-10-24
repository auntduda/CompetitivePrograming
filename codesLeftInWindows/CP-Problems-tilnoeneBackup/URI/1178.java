import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        double n;
        n = ler.nextDouble();
    
        for(int i=0;i<100;i++){
            System.out.printf("N[%d] = %.4f\n", i, n);
            n/=2;
        }

    }
}