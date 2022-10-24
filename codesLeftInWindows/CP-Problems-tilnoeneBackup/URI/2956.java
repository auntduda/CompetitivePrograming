import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        double a = ler.nextDouble();
        double b = ler.nextDouble();
        System.out.printf("Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = %.5f.\n",(a*b)/2);
    }
}