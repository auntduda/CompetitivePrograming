import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int i, k=0, v;
        v = ler.nextInt();
        for(i=0;i<1000;i++){
            System.out.printf("N[%d] = %d\n", i, k);
            if(k==v-1){
                k=0;
            } else{
                k++;
            }
        }

    }
}