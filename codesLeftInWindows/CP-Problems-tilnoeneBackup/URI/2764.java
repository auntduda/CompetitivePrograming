import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        String s = ler.nextLine();
        
        char[] a = new char[s.length()]; 
        
        for(int i = 0; i < s.length(); i++){ 
            a[i] = s.charAt(i); 
        }
        
        System.out.printf("%c%c/%c%c/%c%c\n", a[3], a[4], a[0], a[1], a[6], a[7]);
        System.out.printf("%c%c/%c%c/%c%c\n", a[6], a[7], a[3], a[4], a[0], a[1]);
        System.out.printf("%c%c-%c%c-%c%c\n", a[0], a[1], a[3], a[4], a[6], a[7]);
    }
}