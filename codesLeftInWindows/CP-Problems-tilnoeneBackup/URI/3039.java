import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int n, h=0, m=0, i;
        String nome, sexo;
        
        n = ler.nextInt();
        for(i=0;i<n;i++){
            nome = ler.next();
            sexo = ler.next();
            if(sexo.equals("F")) m+=1;
            else h+=1;
        }
        System.out.printf("%d carrinhos\n%d bonecas\n", h, m);
    }
}