import java.util.Scanner
import java.lang.Math

object Main {
    def main(args: Array[String]) {
        
        val ler = new Scanner(System.in)
        
        var a = ler.nextDouble();
        var b = ler.nextDouble();
  
        System.out.printf("%.2f%%\n", (b*100)/a-100);
    }
}
