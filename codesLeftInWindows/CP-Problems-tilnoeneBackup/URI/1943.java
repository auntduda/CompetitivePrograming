import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int n = ler.nextInt();
        
        System.out.printf("Top ");
        if(n <= 1) System.out.printf("1\n");
        else if(n <= 3) System.out.printf("3\n");
        else if(n <= 5) System.out.printf("5\n");
        else if(n <= 10) System.out.printf("10\n");
        else if(n <= 25) System.out.printf("25\n");
        else if(n <= 50) System.out.printf("50\n");
        else System.out.printf("100\n");

    }
}