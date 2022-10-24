import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int i, n, v, menor, pos=1;
        n = ler.nextInt();
        menor = ler.nextInt();
        for(i=1;i<n;i++){
            v = ler.nextInt();
            if(v<menor){
                menor = v;
                pos = i;
            }
        }
        System.out.printf("Menor valor: %d\n", menor);
        System.out.printf("Posicao: %d\n", pos);

    }
}