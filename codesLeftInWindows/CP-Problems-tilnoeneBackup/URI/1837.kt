import java.util.*
import java.lang.Math

fun main(args: Array<String>) {
    val ler = Scanner(System.`in`)

    var a: Int = ler.nextInt();
    var b: Int = ler.nextInt();
    
    var q = a/b;
        var r = a%b;
        
        if(r<0){
            if(q<0) q-=1;
            else if(q>0) q+=1;
            else{
                if(a-((q-1)*b)>=0){
                    q-=1;
                } else{
                    q+=1;
                }
            }
            r = a-(q*b);
        }
        
        System.out.printf("%d %d\n", q, r);
}