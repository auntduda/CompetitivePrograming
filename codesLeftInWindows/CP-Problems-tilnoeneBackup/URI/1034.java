import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int e, alc=0, gas=0, die=0;
        while(true){
            e =  ler.nextInt();
            if(e==4){
                break;
            } else if(e==1){
                alc++;
            } else if(e==2){
                gas++;
            } else if(e==3){
                die++;
            }
        }
        System.out.printf("MUITO OBRIGADO\n");
        System.out.printf("Alcool: %d\n", alc);
        System.out.printf("Gasolina: %d\n", gas);
        System.out.printf("Diesel: %d\n", die);
    }
}