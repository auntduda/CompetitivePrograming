import java.util.Scanner
import java.lang.Math

object Main {
    def main(args: Array[String]) {
        
        val ler = new Scanner(System.in);
        
        var i = 1;
        var n = ler.nextInt();
        while(n != 0){
            printf("Teste %d\n", i);
            printf("%.0f\n", Math.pow(2, n)-1);
            printf("\n");

            i += 1;
            
            n = ler.nextInt();
        }
    }
}
