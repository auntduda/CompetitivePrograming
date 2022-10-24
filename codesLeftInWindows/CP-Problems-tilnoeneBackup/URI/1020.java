import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int n = ler.nextInt();
        
        System.out.printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", n/365, (n%365)/30, (n%365)%30);
    }
}