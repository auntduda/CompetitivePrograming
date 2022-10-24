import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int n, i;
        double v, maior;
        while(ler.hasNext()){
            n = ler.nextInt();
            maior = ler.nextDouble();
            
            for(i=1;i<n;i++){
                v = ler.nextDouble();
                if(v<maior) maior=v;
            }
            System.out.printf("%.2f\n", maior);
        }

    }
}