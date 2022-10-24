import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        String a = ler.nextLine();
        String b = ler.nextLine();
        String c = ler.nextLine();
        
        System.out.printf("%s%s%s\n", a, b, c);
        System.out.printf("%s%s%s\n", b, c, a);
        System.out.printf("%s%s%s\n", c, a, b);
        System.out.printf("%.10s%.10s%.10s\n", a, b, c);
    }
}