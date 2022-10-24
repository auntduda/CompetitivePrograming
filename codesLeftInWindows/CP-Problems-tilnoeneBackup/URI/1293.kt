import java.util.*
import java.lang.Math

fun main(args: Array<String>) {
    val ler = Scanner(System.`in`)

    while(ler.hasNext()){
        var xa: Double = ler.nextDouble();
        var ya: Double = ler.nextDouble();
        var xb: Double = ler.nextDouble();
        var yb: Double = ler.nextDouble();
        var cmd: Double = ler.nextDouble();
        var enf: Double = ler.nextDouble();
            
        var ab: Double = Math.sqrt((xa - xb)*(xa - xb) + (ya - yb)*(ya - yb));

        cmd = (cmd * 3.14159265358979323846264338327950288419716939937510) / 180;
        enf = (enf * 3.14159265358979323846264338327950288419716939937510) / 180;
        
        println("%.3f".format(ab * (1/Math.tan(cmd) + 1/Math.tan(enf))));
    }
}