import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int a = ler.nextInt(), b = ler.nextInt();
        double c = ler.nextDouble();

        System.out.printf("NUMBER = %d%nSALARY = U$ %.2f%n", a, b*c);
    }
}