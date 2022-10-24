import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        double a, b=2, c, soma=1.0;
        for(a=3;a<=39;a+=2){
            c=a/b;
            soma+=c;
            b*=2;
        }
        System.out.printf("%.2f\n", soma);

    }
}