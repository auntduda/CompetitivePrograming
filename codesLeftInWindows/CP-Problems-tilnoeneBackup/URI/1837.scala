import java.util.Scanner
import java.lang.Math

object Main {
    def main(args: Array[String]) {
        
        val ler = new Scanner(System.in)
        
        var a = ler.nextInt();
        var b = ler.nextInt();

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
        
        printf("%d %d\n", q, r);
    }
}
