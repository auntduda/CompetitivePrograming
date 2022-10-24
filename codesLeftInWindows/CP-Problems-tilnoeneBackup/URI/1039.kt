import java.util.*
import java.lang.Math

fun main(args: Array<String>) {
    val ler = Scanner(System.`in`)

    while(ler.hasNext()){
            var r1: Double = ler.nextDouble();
            var x1: Double = ler.nextDouble();
            var y1: Double = ler.nextDouble();
            var r2: Double = ler.nextDouble();
            var x2: Double = ler.nextDouble();
            var y2: Double = ler.nextDouble();
            
            var d: Double = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);

            if(d <= r1*r1 && Math.sqrt(d)+r2 <= r1) println("RICO");
            else println("MORTO");
        }
}