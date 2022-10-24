import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int l, c, ra, rb, xa, ya, xb, yb, cxa, cya, cxb, cyb;
        
        while(ler.hasNext()){
            l = ler.nextInt();
            c = ler.nextInt();
            ra = ler.nextInt();
            rb = ler.nextInt();
            
            if(l == 0 && c == 0 && ra == 0 && rb == 0) break;
            
            cxa = ra;
            cya = c-ra;
            
            cxb = l-rb;
            cyb = rb;
            
            if(ra*2 <= l && ra*2 <= c && rb*2 <= l && rb*2 <= c){
                if((cxa - cxb) * (cxa - cxb) + (cya - cyb) * (cya - cyb)  >= (ra + rb) * (ra + rb)) System.out.printf("S\n");
                else System.out.printf("N\n");
            } else System.out.printf("N\n");
        }
    }
}