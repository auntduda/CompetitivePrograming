import java.util.*
import java.lang.Math

fun main(args: Array<String>) {
    val ler = Scanner(System.`in`)

    var a = ler.nextInt();
    var b = ler.nextInt();
    
    if((a <= 8 && b >= 9) || (b <= 8 && a >= 9)){
        System.out.printf("final\n");
    } else if((a % 2 == 0 && b == a-1) || (b % 2 == 0 && a == b-1)){
        System.out.printf("oitavas\n");
    } else if((a <= 12 && b >= 13) || (a >= 13 && b <= 12) || (a <= 4 && b >= 5) || (a >= 5 && b <= 4)){
        System.out.printf("semifinal\n");
    } else{
        System.out.printf("quartas\n");
    }
}