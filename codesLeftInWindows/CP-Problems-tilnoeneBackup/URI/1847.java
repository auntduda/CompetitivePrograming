import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);

        int a = ler.nextInt(), b = ler.nextInt(), c = ler.nextInt();
        boolean feliz=false;
        
        if(a>b && b<=c) feliz=true;
        else if(b>a && c>b && c-b>=b-a) feliz=true;
        else if(a>b && b>c && b-c<a-b) feliz=true;
        else if(a==b && c>b) feliz=true;
        
        if(feliz) System.out.printf(":)\n");
        else System.out.printf(":(\n");
    }
}