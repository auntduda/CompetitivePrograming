import java.util.Scanner
import java.lang.Math

object Main {
    def main(args: Array[String]) {
        
        val ler = new Scanner(System.in)
        
        var n = ler.nextInt();

        var meses = Array("January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December");     
        
        System.out.println(meses(n-1));
    }
}
