import java.util.Scanner
import java.lang.Math

object Main {
    def main(args: Array[String]) {
        
        val ler = new Scanner(System.in)
        
        var renda = ler.nextDouble();

        if(renda<=2000){
            println("Isento");
        } else{
            if(renda<=3000){
                println("R$ %.2f".format((8*(renda-2000))/100));
            } else{
                if(renda<=4500){
                    println("R$ %.2f".format((18*(renda-3000))/100+80));
                } else{
                    println("R$ %.2f".format((28*(renda-4500))/100+270+80));
                }
            }
        }
    }
}
