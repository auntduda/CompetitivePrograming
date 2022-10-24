import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
 
        int n = ler.nextInt();
        String e = ler.next();
        double soma = 0, valor;
        int i, j;
        for(i=0;i<12;i++){
            for(j=0;j<12;j++){
                valor = ler.nextDouble();
                if(i==n){
                    soma+=valor;
                }
            }
        }
        
        if(e.equals("S")){
            System.out.printf("%.1f\n", soma);
        }else{
            System.out.printf("%.1f\n", soma/12);
        } 
        
    }
}