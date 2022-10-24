import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int a, b, c;
        while(true){
            a = ler.nextInt();
            if(a==0){
                break;
            }
            b = ler.nextInt();
            c = ler.nextInt();
            System.out.printf("%.0f\n", Math.floor(Math.sqrt((a*b)*(100.0/c))));
        }
    }
}