import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        while(true){
            int n = ler.nextInt();
            
            if(n == 0) break;
            
            int a = 0, b = 0;
            for(int i = 0; i < n; i++){
                int va = ler.nextInt(), vb = ler.nextInt();
                
                if(va > vb) a++;
                else if(va < vb) b++;
            }
            
            System.out.printf("%d %d%n", a, b);
            
        }
    }
}