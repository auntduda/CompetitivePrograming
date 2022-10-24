import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int n = ler.nextInt();
        System.out.printf("%d\n", ((n+1)*(n+2))/2);

    }
}