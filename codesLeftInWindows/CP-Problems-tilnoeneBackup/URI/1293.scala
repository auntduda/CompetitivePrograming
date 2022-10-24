import java.util.Scanner
import java.lang.Math

object Main {
    def main(args: Array[String]) {
        
        val ler = new Scanner(System.in)
        
        while(ler.hasNext()){
            var xa = ler.nextDouble();
            var ya = ler.nextDouble();
            var xb = ler.nextDouble();
            var yb = ler.nextDouble();
            var cmd = ler.nextDouble();
            var enf = ler.nextDouble();
            
            var ab = Math.sqrt((xa - xb)*(xa - xb) + (ya - yb)*(ya - yb));

            cmd = (cmd * 3.14159265358979323846264338327950288419716939937510) / 180;
            enf = (enf * 3.14159265358979323846264338327950288419716939937510) / 180;
            
            println("%.3f".format(ab * (1/Math.tan(cmd) + 1/Math.tan(enf))));
        }
    }
}
