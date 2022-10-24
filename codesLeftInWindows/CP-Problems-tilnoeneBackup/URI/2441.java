import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int a, b, c, temp, tot, fima, fimb, fimc;
        
        a = ler.nextInt();
        b = ler.nextInt();
        c = ler.nextInt();
        
        if(a > b){
            temp = a;
            a = b;
            b = temp;
        }
        
        if(b > c){
            temp = b;
            b = c;
            c = temp;
        }
        
        if(a > b){
            temp = a;
            a = b;
            b = temp;
        }
        
        tot = 0;
    
        fima = a+200;
        fimb = b+200;
        fimc = c+200;
        
        if(fima < b){
            tot += b - fima;
        }
        
        if(fimb < c){
            tot += c - fimb;
        }
        tot += a + 600 - fimc;
        
        System.out.printf("%d\n", tot*100);
    }
}