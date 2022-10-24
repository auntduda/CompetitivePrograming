import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        double a = ler.nextDouble(), b = ler.nextDouble();
        
        if(a==1){
            System.out.printf("Total: R$ %.2f\n", b*4);
        }
        else if(a==2){
            System.out.printf("Total: R$ %.2f\n", b*4.5);
        }
        else if(a==3){
            System.out.printf("Total: R$ %.2f\n", b*5);
        }
        else if(a==4){
            System.out.printf("Total: R$ %.2f\n", b*2);
        }
        else{
            System.out.printf("Total: R$ %.2f\n", b*1.5);
        }
        
    }
}