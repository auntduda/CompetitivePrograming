import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);

        int n, x, d, maria, joao, i, j;
        n = ler.nextInt();
        for(i=0;i<n;i++){
            maria = 0;
            joao = 0;
            for(j=0;j<3;j++){
                x = ler.nextInt();
                d = ler.nextInt();
                joao+=x*d;
            }
            for(j=3;j<6;j++){
                x = ler.nextInt();
                d = ler.nextInt();
                maria+=x*d;
            }
            if(joao>maria){
                System.out.printf("JOAO\n");
            } else{
                System.out.printf("MARIA\n");
            }
        }
    }
}