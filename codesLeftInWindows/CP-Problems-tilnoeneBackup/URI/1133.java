import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int x = ler.nextInt(), y = ler.nextInt(), i;
        if(x>y){
            int temp=x;
            x=y;
            y=temp;
        }
        for(i=x+1;i<y;i++){
            if(i%5==2 || i%5==3){
                System.out.printf("%d\n", i);
            }
        }
    }
}