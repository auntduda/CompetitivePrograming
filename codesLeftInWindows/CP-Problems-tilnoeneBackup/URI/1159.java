import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);

        int n, i, soma;
        while(true){
            n = ler.nextInt();
            if(n==0){
                break;
            }
            if(n%2!=0){
                n++;
            }
            soma=0;
            for(i=0;i<5;i++){
                soma+=n;
                n+=2;
            }
            System.out.printf("%d%n", soma);
        }
    }
}