import java.util.*
import java.lang.Math

fun main(args: Array<String>) {
    val ler = Scanner(System.`in`)

    var n: Int = ler.nextInt();
    
    var meses = arrayOf("January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December");     
        
    System.out.println(meses[n-1]);
}