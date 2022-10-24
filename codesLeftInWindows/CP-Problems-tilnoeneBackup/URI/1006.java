import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        double a = ler.nextDouble(), b = ler.nextDouble(), c = ler.nextDouble();

        System.out.printf("MEDIA = %.1f%n", (((a*2)+(b*3)+(c*5))/10));
    }
}