import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int l, i, j;
        double valor, soma=0;
        String escolha;
        l = ler.nextInt();
        escolha = ler.next();
        for(i=0;i<12;i++){
            for(j=0;j<12;j++){
                valor = ler.nextDouble();
                if(j==l){
                    soma+=valor;
                }
            }
        }
        
        if(escolha.equals('S')){
            System.out.printf("%.1f\n", soma);
        } else{
            System.out.printf("%.1f\n", soma/12);
        }

    }
}