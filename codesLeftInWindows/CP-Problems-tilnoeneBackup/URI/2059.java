import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int p = ler.nextInt();
        int j1 = ler.nextInt();
        int j2 = ler.nextInt();
        int r = ler.nextInt();
        int a = ler.nextInt();
        
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