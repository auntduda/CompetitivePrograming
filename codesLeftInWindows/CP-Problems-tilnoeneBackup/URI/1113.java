import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int x, y;
        while(true){
            x = ler.nextInt();
            y = ler.nextInt();
            if(x==y){
                break;
            }
            if(x>y){
                System.out.println("Decrescente");
            } else{
                System.out.println("Crescente");
            }
        }
       
    }
}