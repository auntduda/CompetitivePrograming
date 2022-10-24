import java.util.Scanner
import java.lang.Math

object Main {
    def main(args: Array[String]) {
        
        val ler = new Scanner(System.in)

		var a = ler.nextInt();
		var b = ler.nextInt();
		var c = ler.nextInt();
        var feliz=false;
        
        if(a>b && b<=c) feliz=true;
        else if(b>a && c>b && c-b>=b-a) feliz=true;
        else if(a>b && b>c && b-c<a-b) feliz=true;
        else if(a==b && c>b) feliz=true;
        
        if(feliz) System.out.printf(":)\n");
        else System.out.printf(":(\n");

    }
}
