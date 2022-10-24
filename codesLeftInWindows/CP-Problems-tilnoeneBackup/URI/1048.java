import java.util.Scanner;

public class Main {
    public static void escreve(double salario, int porcentagem){
        System.out.printf("Novo salario: %.2f\n", (salario*(100+porcentagem))/100);
        System.out.printf("Reajuste ganho: %.2f\n", (porcentagem*salario)/100);
    }
    
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        double salario = ler.nextDouble();

        if(salario<=400){
            escreve(salario, 15);
            System.out.println("Em percentual: 15 %");
        } else if(salario<=800){
            escreve(salario, 12);
            System.out.println("Em percentual: 12 %");
        } else if(salario<=1200){
            escreve(salario, 10);
            System.out.println("Em percentual: 10 %");
        } else if(salario<=2000){
            escreve(salario, 7);
            System.out.println("Em percentual: 7 %");
        } else {
            escreve(salario, 4);
            System.out.println("Em percentual: 4 %");
        }
    }
}