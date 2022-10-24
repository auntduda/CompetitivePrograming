import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        double xa, ya, xb, yb, cmd, enf;
        
        while(ler.hasNext()){
            xa = ler.nextDouble();
            ya = ler.nextDouble();
            xb = ler.nextDouble();
            yb = ler.nextDouble();
            cmd = ler.nextDouble();
            enf = ler.nextDouble();
            
            double ab = Math.sqrt((xa - xb)*(xa - xb) + (ya - yb)*(ya - yb));

            cmd = (cmd * 3.14159265358979323846264338327950288419716939937510) / 180;
            enf = (enf * 3.14159265358979323846264338327950288419716939937510) / 180;
            
            System.out.printf("%.3f\n", ab * (1/Math.tan(cmd) + 1/Math.tan(enf)));
        }
    }
}