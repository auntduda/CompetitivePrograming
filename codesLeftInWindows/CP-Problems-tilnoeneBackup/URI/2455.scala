import java.util.Scanner
import java.lang.Math

object Main {
    def main(args: Array[String]) {
        
        val ler = new Scanner(System.in)
        
        var a = ler.nextInt();
        var b = ler.nextInt();
        var c = ler.nextInt();
        var d = ler.nextInt();
        
        if(a*b == c*d){ 
            System.out.printf("0\n");
        } else if(a*b < c*d){ 
            System.out.printf("1\n");
        } else{ 
            System.out.printf("-1\n");
        }
    }
}
