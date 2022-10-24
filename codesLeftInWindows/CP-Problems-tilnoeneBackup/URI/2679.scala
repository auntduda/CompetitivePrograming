import java.util.Scanner
import java.lang.Math

object Main {
    def main(args: Array[String]) {
        
        val ler = new Scanner(System.in)
        
        var a = ler.nextInt();
        if(a % 2 == 0){
            printf("%d\n", a+2);
        } else{
            printf("%d\n", a+1); 
        }
    }
}
