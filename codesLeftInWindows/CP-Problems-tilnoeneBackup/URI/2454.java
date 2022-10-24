import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int a = ler.nextInt(), b = ler.nextInt();

        if(a == 0) System.out.printf("C\n");
        else{
            if(b == 0) System.out.printf("B\n");
            else System.out.printf("A\n");
        }
    }
}