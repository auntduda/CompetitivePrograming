import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int a = ler.nextInt(), b = ler.nextInt();
        int q = a/b, r = a%b;
        
        if(r<0){
            if(q<0) q--;
            else if(q>0) q++;
            else{
                if(a-((q-1)*b)>=0){
                    q--;
                } else{
                    q++;
                }
            }
            r = a-(q*b);
        }
        
        System.out.printf("%d %d\n", q, r);
        
    }
}