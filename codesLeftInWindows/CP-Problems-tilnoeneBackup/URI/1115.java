import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int x, y;
        while(true){
            x = ler.nextInt();
    		y = ler.nextInt();
            if(x==0 || y==0){
                break;
            }
            if(x>0){
                if(y>0){
    				System.out.println("primeiro");
                } else{
    				System.out.println("quarto");
                }
            } else{
                if(y>0){
    				System.out.println("segundo");
                } else{
                    System.out.println("terceiro");
                }
            }
        }
       
    }
}