import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int n = ler.nextInt();
        
        System.out.printf("%d\n", n);
        System.out.printf("%d nota(s) de R$ 100,00\n", n/100);
        System.out.printf("%d nota(s) de R$ 50,00\n", (n%100)/50);
        System.out.printf("%d nota(s) de R$ 20,00\n", ((n%100)%50)/20);
        System.out.printf("%d nota(s) de R$ 10,00\n", (((n%100)%50)%20)/10);
        System.out.printf("%d nota(s) de R$ 5,00\n", ((((n%100)%50)%20)%10)/5);
        System.out.printf("%d nota(s) de R$ 2,00\n", (((((n%100)%50)%20)%10)%5)/2);
        System.out.printf("%d nota(s) de R$ 1,00\n", (((((n%100)%50)%20)%10)%5)%2);
    }
}