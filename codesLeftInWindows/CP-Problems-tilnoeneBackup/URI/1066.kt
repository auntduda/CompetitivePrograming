import java.util.*
import java.lang.Math

fun main(args: Array<String>) {
    val ler = Scanner(System.`in`)

    var pos=0;
    var neg=0;
    var par=0;
    var imp=0;
    for (i in 1..5) {
        var a = ler.nextInt();
        if(a>0){
            pos++;
        } else if(a<0){
            neg++;
        }
        if(a%2==0){
            par++;
        } else{
            imp++;
        }
    }
    System.out.printf("%d valor(es) par(es)\n", par);
    System.out.printf("%d valor(es) impar(es)\n", imp);
    System.out.printf("%d valor(es) positivo(s)\n", pos);
    System.out.printf("%d valor(es) negativo(s)\n", neg);
}