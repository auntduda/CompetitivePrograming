import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);

        int i;
        double v;
        for(i=0;i<100;i++){
            v = ler.nextDouble();
            if(v<=10){
                System.out.printf("A[%d] = %.1f\n", i, v);
            }
        }
    }
}