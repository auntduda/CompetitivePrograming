import java.util.Scanner
import java.lang.Math

object Main {
    def main(args: Array[String]) {
        
        val ler = new Scanner(System.in)
        
        var p = ler.nextInt();
        var j1 = ler.nextInt();
        var j2 = ler.nextInt();
        var r = ler.nextInt();
        var a = ler.nextInt();
  
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
}
