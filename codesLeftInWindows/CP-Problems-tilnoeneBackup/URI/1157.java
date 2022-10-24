import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int n, i;
        n = ler.nextInt();
        for(i=1;i<=n;i++){
            if(n%i==0){
                System.out.printf("%d\n", i);
            }
        }

    }
}