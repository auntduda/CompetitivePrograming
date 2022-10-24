import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
    
        int n = ler.nextInt(), i, x;

        for(i=0;i<n;i++){
            x = ler.nextInt();
            if(x==0){
                System.out.println("NULL");
            } else{
                if(x%2==0){
                    System.out.printf("EVEN ");
                } else{
                    System.out.printf("ODD ");
                }
                if(x>0){
                    System.out.printf("POSITIVE\n");
                } else{
                    System.out.printf("NEGATIVE\n");
                }
            }
        }
    }
}