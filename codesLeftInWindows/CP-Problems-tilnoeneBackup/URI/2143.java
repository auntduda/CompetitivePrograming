import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);

        int t, v, i;
        while(true){
            t = ler.nextInt();
            if(t==0) break;
            for(i=0;i<t;i++){
                v = ler.nextInt();
                if(v%2==0) System.out.printf("%d\n", (v-1)*2);
                else System.out.printf("%d\n", (v*2-1));
            }
        }
    }
}