import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int n = ler.nextInt();
        int tot = 7;
        
        if(n >= 101){
            tot += (n-100)*5;
            n = 100;
        }
        
        if(n >= 31){
            tot += (n-30)*2;
            n = 30;
        }
        
        if(n >= 11){
            tot += (n-10);
            n = 10;
        }
        
        System.out.printf("%d\n", tot);
    }
}