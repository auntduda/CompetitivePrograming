import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
    
        int n = ler.nextInt();
        
        int fim = n;
        if(n%2!=0){
            fim=n-1;
        }
    
        for(int i=2;i<=fim;i+=2){
            System.out.printf("%d^2 = %d\n", i, i*i);
        }
    }
}