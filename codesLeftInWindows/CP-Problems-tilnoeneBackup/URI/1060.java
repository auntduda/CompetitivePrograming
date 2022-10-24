import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int val = 0;
        
        for(int i=0;i<6;i++){
            double n = ler.nextDouble();
            if(n>0){
                val++;
            }
        }
        System.out.println(val+" valores positivos");
    }
}