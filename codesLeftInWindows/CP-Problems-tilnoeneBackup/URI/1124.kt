import java.util.*
import java.lang.Math

fun main(args: Array<String>) {
    val ler = Scanner(System.`in`)

    while(ler.hasNext()){
        var l: Int = ler.nextInt();
        var c: Int = ler.nextInt();
        var ra: Int = ler.nextInt();
        var rb: Int = ler.nextInt();
            
        if(l == 0 && c == 0 && ra == 0 && rb == 0) break;
            
        var cxa: Int = ra;
        var cya: Int = c-ra;
            
        var cxb: Int = l-rb;
        var cyb: Int = rb;
            
        if(ra*2 <= l && ra*2 <= c && rb*2 <= l && rb*2 <= c){
            if((cxa - cxb) * (cxa - cxb) + (cya - cyb) * (cya - cyb)  >= (ra + rb) * (ra + rb)) println("S");
            else println("N");
        } else println("N");
    }
}