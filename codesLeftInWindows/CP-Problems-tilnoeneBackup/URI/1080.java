import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
    
        int maior = ler.nextInt(), pos=1, i, n;
        
        for(i=2;i<=100;i++){
            n = ler.nextInt();
            if(n>maior){
                maior=n;
                pos=i;
            }
        }
        
        System.out.printf("%d\n%d\n", maior, pos);
        
    }
}