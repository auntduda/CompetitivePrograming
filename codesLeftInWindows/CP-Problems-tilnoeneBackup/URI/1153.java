import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int n = ler.nextInt(), i, soma=1;
        
        for(i=2;i<=n;i++){
            soma=soma*i;
        }
        System.out.printf("%d\n", soma);
    }
}