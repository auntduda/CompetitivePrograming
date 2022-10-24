import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);

        double valor, n=0;
        int positivos=0, i;
    
        for(i=1;i<=6;i++){
            valor = ler.nextDouble();
            if(valor>0){
                positivos++;
                n+=valor;
            }
        }
    
        System.out.printf("%d valores positivos\n%.1f\n", positivos, n/positivos);

    }
}