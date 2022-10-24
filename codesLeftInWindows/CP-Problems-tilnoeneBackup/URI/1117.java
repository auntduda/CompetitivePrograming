import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        double n1=-1, n2, nota;
        while(true){
            nota = ler.nextDouble();
            if(nota>=0 && nota<=10){
                if(n1<0){
                    n1=nota;
                } else{
                    n2=nota;
                    break;
                }
            } else{
                System.out.println("nota invalida");
            }
        }
        System.out.printf("media = %.2f\n", (n1+n2)/2);
       
    }
}