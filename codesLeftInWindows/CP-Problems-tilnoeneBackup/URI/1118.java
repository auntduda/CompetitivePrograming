import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int escolha=0;
        double n, x=-1, y;
        while(true){
            n = ler.nextDouble();
            if(n>=0 && n<=10){
                if(x==-1){
                    x=n;
                } else{
                    y=n;
                    break;
                }
            } else{
                System.out.printf("nota invalida\n");
            }
        }
        System.out.printf("media = %.2f\n", (x+y)/2);
        
        while(escolha!=2){
            if(escolha!=1 && escolha!=2){
                System.out.printf("novo calculo (1-sim 2-nao)\n");
                escolha=2;
                escolha = ler.nextInt();
            } else if(escolha==1){
                x=-1;
                while(true){
                    n = ler.nextDouble();
                    if(n>=0 && n<=10){
                        if(x==-1){
                            x=n;
                        } else{
                            y=n;
                            break;
                        }
                    } else{
                        System.out.printf("nota invalida\n");
                    }
                }
                System.out.printf("media = %.2f\n", (x+y)/2);
                System.out.printf("novo calculo (1-sim 2-nao)\n");
                escolha = ler.nextInt();
            } else{
                break;
            }
        }
    }
}