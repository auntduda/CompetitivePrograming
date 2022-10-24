import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        String a = ler.nextLine();

        if(a.length() > 140) System.out.println("MUTE");
        else System.out.println("TWEET");
    }
}