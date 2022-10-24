import java.util.*
import java.lang.Math

fun main(args: Array<String>) {
    val ler = Scanner(System.`in`)
    
    while(ler.hasNext()){
        val a: Double = ler.nextDouble()
        val b: Double = ler.nextDouble()
        val c: Double = ler.nextDouble()
        
        val raiz = 2*(a*a*b*b+b*b*c*c+c*c*a*a)-(a*a*a*a + b*b*b*b + c*c*c*c)
        
        if(raiz > 0) println("%.3f".format((1/3.0 * Math.sqrt(raiz))))
        else println("-1.000")
    }

}