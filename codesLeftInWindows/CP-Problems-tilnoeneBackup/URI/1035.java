import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int a = ler.nextInt(), b = ler.nextInt(), c = ler.nextInt(), d = ler.nextInt();
        if(b>c && d>a && c+d>a+b && c>0 && d>0 && a%2==0){ 
            System.out.printf("Valores aceitos\n");
        }
        else{ 
            System.out.printf("Valores nao aceitos\n");
        }
    }
}