import java.util.Scanner;

public class Main {
    public static int min(int a, int b){
        if(a > b){
            return b;
        } else{
            return a;
        }
    }
    
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int t1, t2, t3;
        int[] a = new int[3];
        
        a[0] = ler.nextInt();
        a[1] = ler.nextInt();
        a[2] = ler.nextInt();
        
        t1 = a[1]*2+a[2]*4;
        t2 = a[0]*2+a[2]*2;
        t3 = a[0]*4+a[1]*2;
        
        System.out.println(min(min(t1, t2), t3));
    }
}