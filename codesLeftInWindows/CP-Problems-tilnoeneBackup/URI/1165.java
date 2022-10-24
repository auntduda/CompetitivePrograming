import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int n, v, i, j;
        n = ler.nextInt();
        for(j=0;j<n;j++){
            v = ler.nextInt();
            int div=0;
            if(v==2){
                System.out.printf("%d eh primo\n", v);
            } else if(v==1){
                System.out.printf("%d nao eh primo\n", v);
            } else if(v%2==0){
                System.out.printf("%d nao eh primo\n", v);
            } else{
                for(i=3;i<v;i+=2){
                    if(v%i==0){
                        div=1;
                        break;
                    }
                }
                if(div==0){
                    System.out.printf("%d eh primo\n", v);
                } else{
                    System.out.printf("%d nao eh primo\n", v);
                }
            }
        }
    }
}