import java.util.*
import java.lang.Math

fun main(args: Array<String>) {
    val ler = Scanner(System.`in`)

    var i = 1;
        while(ler.hasNext()){
            var n = ler.nextDouble();
            if(n == 0.0) break;
            
            System.out.printf("Teste %d\n", i);
            System.out.printf("%.0f\n", Math.pow(2.0, n)-1);
            System.out.printf("\n");

            i += 1;
        }
}