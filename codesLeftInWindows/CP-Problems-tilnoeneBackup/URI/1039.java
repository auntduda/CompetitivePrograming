import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        double r1, x1, y1, r2, x2, y2;
        
        while(ler.hasNext()){
            r1 = ler.nextDouble();
            x1 = ler.nextDouble();
            y1 = ler.nextDouble();
            r2 = ler.nextDouble();
            x2 = ler.nextDouble();
            y2 = ler.nextDouble();
            
            double d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);

            if(d <= r1*r1 && Math.sqrt(d)+r2 <= r1) System.out.printf("RICO\n");
            else System.out.printf("MORTO\n");
        }
    }
}