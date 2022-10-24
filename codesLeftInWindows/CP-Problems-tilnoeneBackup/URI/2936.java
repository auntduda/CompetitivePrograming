import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int p1 = ler.nextInt(), p2 = ler.nextInt(), p3 = ler.nextInt(), p4 = ler.nextInt(), p5 = ler.nextInt(), soma=0;
        System.out.printf("%d\n", p1*300+p2*1500+p3*600+p4*1000+p5*150+225);

    }
}