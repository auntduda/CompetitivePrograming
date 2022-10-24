import java.util.*
import java.lang.Math

fun main(args: Array<String>) {
    val ler = Scanner(System.`in`)

    var p: Int = ler.nextInt();
    var j1: Int = ler.nextInt();
    var j2: Int = ler.nextInt();
    var r: Int = ler.nextInt();
    var a: Int = ler.nextInt();
    
    if(r==1){ // j1 roubou
            if(a==1){
                System.out.printf("Jogador 2 ganha!\n");
            } else{
                System.out.printf("Jogador 1 ganha!\n");
            }
        } else{ // j1 nao robou
            if(a==1){
                System.out.printf("Jogador 1 ganha!\n");
            } else{
                if((j1+j2)%2==0){
                    if(p==1){
                        System.out.printf("Jogador 1 ganha!\n");
                    } else{
                        System.out.printf("Jogador 2 ganha!\n");
                    }
                } else{
                    if(p==1){
                        System.out.printf("Jogador 2 ganha!\n");
                    } else{
                        System.out.printf("Jogador 1 ganha!\n");
                    }
                }
            }
        }
}