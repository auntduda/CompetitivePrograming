import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int senha = ler.nextInt();
        while(senha!=2002){
            System.out.println("Senha Invalida");
            senha = ler.nextInt();
        }
        System.out.println("Acesso Permitido");
       
    }
}