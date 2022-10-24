import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        var a = ler.nextInt();
        var b = ler.nextInt();
        var c = ler.nextInt();
        var d = ler.nextInt();
        
        if(a*b == c*d){ 
            System.out.printf("0\n");
        } else if(a*b < c*d){ 
            System.out.printf("1\n");
        } else{ 
            System.out.printf("-1\n");
        }
    }
}