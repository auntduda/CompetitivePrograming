import java.util.*
import java.lang.Math

fun main(args: Array<String>) {
    val ler = Scanner(System.`in`)

    var a = ler.nextInt();
    
    if(a % 2 == 0){
        System.out.printf("%d\n", a+2);
    } else{
        System.out.printf("%d\n", a+1); 
    }
}