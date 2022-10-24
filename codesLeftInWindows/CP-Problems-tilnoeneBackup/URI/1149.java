import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int a, n, soma=0, i;
        a = ler.nextInt();
        n = ler.nextInt();
        while(n<=0){
            n = ler.nextInt();
        }
        for(i=0;i<n;i++){
            soma+=a+i;
        }
        System.out.printf("%d\n", soma);
        
    }
}