import java.util.Scanner
import java.lang.Math

object Main {
    def main(args: Array[String]) {
        
        val ler = new Scanner(System.in)
        var continua = true;
        
        while(ler.hasNext() && continua){
            var l = ler.nextInt();
            var c = ler.nextInt();
            var ra = ler.nextInt();
            var rb = ler.nextInt();
            
            if(l == 0 && c == 0 && ra == 0 && rb == 0) continua = false;
            
            var cxa = ra;
            var cya = c-ra;
            
            var cxb = l-rb;
            var cyb = rb;
            
            if(continua){
                if(ra*2 <= l && ra*2 <= c && rb*2 <= l && rb*2 <= c){
                    if((cxa - cxb) * (cxa - cxb) + (cya - cyb) * (cya - cyb)  >= (ra + rb) * (ra + rb)) println("S");
                    else println("N");
                } else println("N");
            }

        }
    }
}
