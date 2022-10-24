import java.util.Scanner
import java.lang.Math

object Main {
    def min(a:Int, b:Int) : Int = {
        if(a < b) return a;
        return b;
    }
    
    def dentro(x:Int, y:Int, a:Int, b:Int) : Boolean = {
        if(x <= a && y <= b) return true;
        return false;
    }
    
    def main(args: Array[String]) {
        
        val ler = new Scanner(System.in)
        
        var a1 = ler.nextInt();
        var b1 = ler.nextInt();
        var a2 = ler.nextInt();
        var b2 = ler.nextInt();
        var a = ler.nextInt();
        var b = ler.nextInt();
        var ans = false;
        var c1x = b1 + a2;
        var c1y = min(a1, b2);
        
        if(dentro(a, b, a1, b1) || dentro(b, a, a1, b1) || dentro(a, b, a2, b2) || dentro(b, a, a2, b2)){
            println("S");
            ans = true;
        } else if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
            println("S");
            ans = true;
        } else{
            c1x = a1 + b2;
            c1y = min(b1, a2);
            
            if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
                println("S");
                ans = true;
            }
            
            c1x = a1 + a2;
            c1y = min(b1, b2);
            
            if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
                println("S");
                ans = true;
            }
            
            c1x = b1 + b2;
            c1y = min(a1, a2);
            
            if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
                println("S");
                ans = true;
            }
            
        if(!ans) println("N");
    }
        
    }
}
