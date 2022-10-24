import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
    
        int a, pos=0, neg=0, par=0, imp=0;
        for(int i=0;i<5;i++){
            a = ler.nextInt();
            if(a>0){
                pos++;
            } else if(a<0){
                neg++;
            }
            if(a%2==0){
                par++;
            } else{
                imp++;
            }
        }
        System.out.printf("%d valor(es) par(es)\n", par);
        System.out.printf("%d valor(es) impar(es)\n", imp);
        System.out.printf("%d valor(es) positivo(s)\n", pos);
        System.out.printf("%d valor(es) negativo(s)\n", neg);
    }
}