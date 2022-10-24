import java.util.*
import java.lang.Math

fun main(args: Array<String>) {
    val ler = Scanner(System.`in`)

    var a: String = ler.nextLine();
    var b: String = ler.nextLine();
    var c: String = ler.nextLine();
    
    if(a.equals("vertebrado")){
            if(b.equals("ave")){
                if(c.equals("carnivoro")){
                    System.out.printf("aguia\n");
                } else{
                    System.out.printf("pomba\n");
                }
            } else{
                if(c.equals("onivoro")){
                    System.out.printf("homem\n");
                } else{
                    System.out.printf("vaca\n");
                }
            }
        } else{
            if(b.equals("inseto")){
                if(c.equals("hematofago")){
                    System.out.printf("pulga\n");
                } else{
                    System.out.printf("lagarta\n");
                }
            } else{
                if(c.equals("hematofago")){
                    System.out.printf("sanguessuga\n");
                } else{
                    System.out.printf("minhoca\n");
                }
            }
        }
}