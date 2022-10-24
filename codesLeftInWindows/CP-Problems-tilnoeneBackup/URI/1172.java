import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);

        int i, v;
        for(i=0;i<10;i++){
            v = ler.nextInt();
            if(v<=0){
                v=1;
            }
            System.out.printf("X[%d] = %d\n", i, v);
        }
    }
}