import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int a = ler.nextInt(), m = ler.nextInt();
        System.out.printf("%d\n", 2*m-a);
    }
}