import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
    
        int i, j;
        for(i=1;i<=9;i+=2){
            for(j=7;j>=5;j--){
                System.out.printf("I=%d J=%d\n", i, j);
            }
        }
       
    }
}