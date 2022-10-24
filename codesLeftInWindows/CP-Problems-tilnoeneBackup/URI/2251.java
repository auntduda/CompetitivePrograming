import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int n, i = 1;
        
        while(ler.hasNext()){
            n = ler.nextInt();
            if(n == 0) break;
            
            System.out.printf("Teste %d\n", i);
            System.out.printf("%.0f\n", Math.pow(2, n)-1);
            System.out.printf("\n");

            i += 1;
        }
    }
}