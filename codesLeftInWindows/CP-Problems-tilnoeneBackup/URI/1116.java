import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int i, n;
        double x, y;
        n = ler.nextInt();
        
        for(i=0;i<n;i++){
            x = ler.nextDouble();
            y = ler.nextDouble();
            if(y==0){
                System.out.printf("divisao impossivel\n");
            } else{
                System.out.printf("%.1f\n", x/y);
            }
        }
       
    }
}