import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int a = ler.nextInt();
        
        if(a % 2 == 0) System.out.printf("%d\n", a+2);
        else System.out.printf("%d\n", a+1);
    }
}