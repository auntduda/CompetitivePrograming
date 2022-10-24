import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        char l;
        l = ler.next().charAt(0);;
        System.out.printf("%d\n", (int)l-64);
    }
}