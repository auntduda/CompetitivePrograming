import java.util.Scanner
import java.lang.Math

object Main {
    def main(args: Array[String]) {
        
        val ler = new Scanner(System.in)
        
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
}
