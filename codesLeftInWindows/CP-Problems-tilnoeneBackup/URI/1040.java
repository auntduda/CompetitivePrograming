import java.util.Scanner;
import java.text.DecimalFormat;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        double n1 = ler.nextDouble(), n2 = ler.nextDouble(), n3 = ler.nextDouble(), n4 = ler.nextDouble();
        double media = (n1*2+n2*3+n3*4+n4)/10.0;
        DecimalFormat df = new DecimalFormat("#.0");
        System.out.printf("Media: %s\n", df.format(media));
        if(media>=7){
            System.out.printf("Aluno aprovado.\n");
        } else if(media<5){
            System.out.printf("Aluno reprovado.\n");
        } else{
            System.out.printf("Aluno em exame.\n");
            double n = ler.nextDouble();
            System.out.printf("Nota do exame: %s\n", df.format(n));
            media=(media+n)/2;
            if(media>5){
                System.out.printf("Aluno aprovado.\n");
            } else{
                System.out.printf("Aluno reprovado.\n");
            }
            System.out.printf("Media final: %s\n", df.format(media));
        }
    }
}