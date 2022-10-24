import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int i, n, a1, a2, soma;
        int[] fib;
        fib = new int[64];
        fib[0] = 0;
        fib[1] = 1;
        n = ler.nextInt();
        for(i=2;i<n;i++){
            fib[i]=fib[i-1]+fib[i-2];
        }
        for(i=0;i<n;i++){
            System.out.printf("%d", fib[i]);
            if(i==n-1){
                System.out.printf("\n");
            } else{
                System.out.printf(" ");
            }
        }
    }
}