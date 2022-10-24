import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int n = ler.nextInt(), v, i;
        int[] mult = {0,0,0,0};
        for(i=0;i<n;i++){
            v = ler.nextInt();
            if(v%2==0){
                mult[0]++;
            }
            if(v%3==0){
                mult[1]++;
            }
            if(v%4==0){
                mult[2]++;
            }
            if(v%5==0){
                mult[3]++;
            }
        }
        System.out.printf("%d Multiplo(s) de 2\n", mult[0]);
        System.out.printf("%d Multiplo(s) de 3\n", mult[1]);
        System.out.printf("%d Multiplo(s) de 4\n", mult[2]);
        System.out.printf("%d Multiplo(s) de 5\n", mult[3]);
    }
}