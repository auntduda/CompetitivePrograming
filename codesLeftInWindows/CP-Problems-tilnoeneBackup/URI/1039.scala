import java.util.Scanner
import java.lang.Math

object Main {
    def main(args: Array[String]) {
        
        val ler = new Scanner(System.in)
        
        while(ler.hasNext()){
            var r1 = ler.nextDouble();
            var x1 = ler.nextDouble();
            var y1 = ler.nextDouble();
            var r2 = ler.nextDouble();
            var x2 = ler.nextDouble();
            var y2 = ler.nextDouble();
            
            var d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);

            if(d <= r1*r1 && Math.sqrt(d)+r2 <= r1) println("RICO");
            else println("MORTO");
        }
    }
}
