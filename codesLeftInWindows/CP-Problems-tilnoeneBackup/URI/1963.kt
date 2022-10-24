import java.util.*
import java.lang.Math

fun main(args: Array<String>) {
    val ler = Scanner(System.`in`)

    var a: Double = ler.nextDouble();
    var b: Double = ler.nextDouble();
        
        System.out.printf("%.2f%%\n", (b*100)/a-100);
}