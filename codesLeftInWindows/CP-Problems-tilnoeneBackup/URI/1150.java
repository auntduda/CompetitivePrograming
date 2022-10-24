import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int x, z, soma=0, i=0;
        x = ler.nextInt();
        while(true){
            z = ler.nextInt();
            if(z>x){
                break;
            }
        }
        while(soma<z){
            soma+=i+x;
            i++;
        }
        System.out.printf("%d\n", i);
        
    }
}