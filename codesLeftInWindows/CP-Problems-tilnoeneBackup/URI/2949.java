import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int n, i, a=0, elf=0, h=0, m=0, x=0;
        String nome, e;
        n = ler.nextInt();
        for(i=0;i<n;i++){
            nome = ler.next();
            e = ler.next();
            if(e.equals("A")) a++;
            else if(e.equals("E")) elf++;
            else if(e.equals("H")) h++;
            else if(e.equals("M")) m++;
            else x++;
        }
        System.out.printf("%d Hobbit(s)\n", x);
        System.out.printf("%d Humano(s)\n", h);
        System.out.printf("%d Elfo(s)\n", elf);
        System.out.printf("%d Anao(s)\n", a);
        System.out.printf("%d Mago(s)\n", m);

    }
}