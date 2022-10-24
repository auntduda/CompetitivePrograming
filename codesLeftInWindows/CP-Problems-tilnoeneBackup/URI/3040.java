import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);

        int i, n, a, b, c;
        n = ler.nextInt();
        for(i=0;i<n;i++){
            a = ler.nextInt();
            b = ler.nextInt();
            c = ler.nextInt();
            if(a>=200 && a<=300 && b>=50 && c>=150){
                System.out.printf("Sim\n");
            } else{
                System.out.printf("Nao\n");
            }
        }
    }
}