import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int idade, n=0;
        double soma=0;
        while(true){
            idade = ler.nextInt();
            if(idade<0){
                break;
            }
            soma+=idade;
            n++;
        }
        System.out.printf("%.2f\n", soma/n);

    }
}