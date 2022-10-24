import java.util.*
import java.lang.Math

fun main(args: Array<String>) {
    val ler = Scanner(System.`in`)

    var n = ler.nextInt();
    var tot = 7;
        
        if(n >= 101){
            tot += (n-100)*5;
            n = 100;
        }
        
        if(n >= 31){
            tot += (n-30)*2;
            n = 30;
        }
        
        if(n >= 11){
            tot += (n-10);
            n = 10;
        }
        
        System.out.printf("%d\n", tot);
}