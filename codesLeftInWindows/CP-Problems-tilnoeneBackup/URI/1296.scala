import java.util.Scanner
import java.lang.Math

object Main {
    def main(args: Array[String]) {
        
        val ler = new Scanner(System.in)
        
        while(ler.hasNext()){
            val a = ler.nextDouble()
            val b = ler.nextDouble()
            val c = ler.nextDouble()
            
            val raiz = 2*(a*a*b*b+b*b*c*c+c*c*a*a)-(a*a*a*a + b*b*b*b + c*c*c*c)
            
            if(raiz > 0) println("%.3f".format((1/3.0 * Math.sqrt(raiz))))
            else println("-1.000")
        }
        
    }
}
