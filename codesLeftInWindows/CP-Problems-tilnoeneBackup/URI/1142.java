import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int n = ler.nextInt();
        int l=1, i;
        for(i=0;i<n;i++){
    		System.out.printf("%d %d %d PUM\n", l, l+1, l+2);
            l+=4;
        }
    }
}