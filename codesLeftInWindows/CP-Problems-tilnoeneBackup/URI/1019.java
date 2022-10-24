import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int n = ler.nextInt();
        
        System.out.printf("%d:%d:%d\n", n/3600, (n%3600)/60, (n%3600)%60);
    }
}