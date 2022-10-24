import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int a = ler.nextInt(), b = ler.nextInt(), c = ler.nextInt(), d = ler.nextInt();

        System.out.println("DIFERENCA = " + (a*b-c*d));
    }
}