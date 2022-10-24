import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int m=ler.nextInt(), a=ler.nextInt(), b=ler.nextInt();
        int c = m-a-b;
        if(a>b){
            if(a>c){
                System.out.printf("%d\n", a);
            } else{
                System.out.printf("%d\n", c);
            }
        } else{
            if(b>c){
                System.out.printf("%d\n", b);
            } else{
                System.out.printf("%d\n", c);
            }
        }
    }
}