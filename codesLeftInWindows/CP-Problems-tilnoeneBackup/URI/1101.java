import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int m, n, soma, i, temp;
        while(true){
            n = ler.nextInt();
            m = ler.nextInt();
            if(m<=0 || n<=0){
                break;
            }
            if(m>n){
                temp=n;
                n=m;
                m=temp;
            }
            soma=0;
            for(i=m;i<=n;i++){
                soma+=i;
                System.out.printf("%d ", i);
            }
            System.out.printf("Sum=%d\n", soma);
        }
       
    }
}