import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        double a = ler.nextDouble(), b = ler.nextDouble(), c = ler.nextDouble();
        double delta = b*b-4*a*c;
        if(delta<0 || a==0){ 
            System.out.printf("Impossivel calcular\n");
        }
        else{ 
            System.out.printf("R1 = %.5f\nR2 = %.5f\n", (-b+Math.sqrt(delta))/(2*a), (-b-Math.sqrt(delta))/(2*a));
        }
    }
}