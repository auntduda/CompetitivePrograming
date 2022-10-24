import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
    
        int num, pares=0;
    
        for(int i=1;i<=5;i++){
            num = ler.nextInt();
            if(num%2==0){
                pares++;
            }
        }
        System.out.printf("%d valores pares\n", pares);
    }
}