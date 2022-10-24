import java.util.*
import java.lang.Math

fun main(args: Array<String>) {
    val ler = Scanner(System.`in`)

    var a = ler.nextInt();
    var b = ler.nextInt();
    
    if(a == 0){
        System.out.printf("C\n");
    } else{
        if(b == 0){
            System.out.printf("B\n");
        } else{
         System.out.printf("A\n");
        }
    }
}