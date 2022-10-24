import java.util.Scanner;

public class Main {
    public static boolean dentro(int x, int y, int a, int b){
        if(x <= a && y <= b) return true;
        return false;
    }
    
    public static int min(int a, int b){
        if(a < b) return a;
        return b;
    }
    
    public static void main(String args[]){
        Scanner ler = new Scanner(System.in);
        
        int a1 = ler.nextInt(), b1 = ler.nextInt(), a2 = ler.nextInt(), b2 = ler.nextInt(), a = ler.nextInt(), b = ler.nextInt();
        boolean ans = false;
        int c1x = b1 + a2;
        int c1y = min(a1, b2);
        if(dentro(a, b, a1, b1) || dentro(b, a, a1, b1) || dentro(a, b, a2, b2) || dentro(b, a, a2, b2)){
        System.out.printf("S\n");
        ans = true;
    } else if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
        System.out.printf("S\n");
        ans = true;
    } else{
        c1x = a1 + b2;
        c1y = min(b1, a2);
        
        if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
            System.out.printf("S\n");
            ans = true;
        }
        
        c1x = a1 + a2;
        c1y = min(b1, b2);
        
        if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
            System.out.printf("S\n");
            ans = true;
        }
        
        c1x = b1 + b2;
        c1y = min(a1, a2);
        
        if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
            System.out.printf("S\n");
            ans = true;
        }
        
    }
    
    if(!ans) System.out.printf("N\n");
    }
}