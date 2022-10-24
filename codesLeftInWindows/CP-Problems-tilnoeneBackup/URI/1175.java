import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int i, n[];
        n = new int[32];
        for(i=0;i<20;i++){
            n[i] = ler.nextInt();
        }
        for(i=0;i<20;i++){
            System.out.printf("N[%d] = %d\n", i, n[19-i]);
        }
    }
}