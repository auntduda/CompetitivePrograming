import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int n, x, soma, i, j;
        n = ler.nextInt();
        for(i=0;i<n;i++){
            x = ler.nextInt();
            soma=0;
            for(j=1;j<x;j++){
                if(x%j==0){
                    soma+=j;
                }
            }
            if(soma==x){
                System.out.printf("%d eh perfeito\n", x);
            } else{
                System.out.printf("%d nao eh perfeito\n", x);
            }
        }

    }
}