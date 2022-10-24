import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        double soma=0, divisao, i;
        for(i=1;i<=100;i++){
            divisao=1/i;
            soma+=divisao;
        }
    	System.out.printf("%.2f\n", soma);

    }
}