import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        String nome = ler.nextLine();
        double a = ler.nextDouble(), b = ler.nextDouble();

        System.out.printf("TOTAL = R$ %.2f%n", a+0.15*b);
    }
}