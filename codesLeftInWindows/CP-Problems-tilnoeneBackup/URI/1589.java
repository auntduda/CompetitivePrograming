import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int n, i, r1, r2;
        n = ler.nextInt();
        for(i=0;i<n;i++){
            r1 = ler.nextInt();
            r2 = ler.nextInt();
            System.out.printf("%d\n", r1+r2);
        }
    }
}