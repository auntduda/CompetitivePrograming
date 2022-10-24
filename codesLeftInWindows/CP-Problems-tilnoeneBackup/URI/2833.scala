import java.util.Scanner
import java.lang.Math

object Main {
    def main(args: Array[String]) {
        
        val ler = new Scanner(System.in)
        var v = new Array[Int](17);
        var i = 0;
        var a = 0;
        var b = 0;
        
        for (i <- 1 to 16) {
            v(i) = ler.nextInt();
            if(v(i) == 1) a = i;
            else if(v(i) == 9) b = i;
        }
        
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
}