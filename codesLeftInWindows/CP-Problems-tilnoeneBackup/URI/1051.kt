import java.util.*
import java.lang.Math

fun main(args: Array<String>) {
    val ler = Scanner(System.`in`)

    var renda: Double = ler.nextDouble();
    
    if(renda<=2000){
            System.out.printf("Isento\n");
        } else{
            if(renda<=3000){
                System.out.printf("R$ %.2f\n", (8*(renda-2000))/100);
            } else{
                if(renda<=4500){
                    System.out.printf("R$ %.2f\n", (18*(renda-3000))/100+80);
                } else{
                    System.out.printf("R$ %.2f\n", (28*(renda-4500))/100+270+80);
                }
            }
        }
}