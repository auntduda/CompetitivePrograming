import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int i;
        for(i=0;i<39;i++){
            System.out.printf("-");
        }
        System.out.printf("\n");
        for(i=0;i<5;i++){
            System.out.printf("|");
            int j;
            for(j=0;j<37;j++){
                System.out.printf(" ");
            }
            System.out.printf("|\n");
        }
        
        for(i=0;i<39;i++){
            System.out.printf("-");
        }
        System.out.printf("\n");

    }
}