import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int i, v;
        v = ler.nextInt();
        int ant = v;
        for(i=0;i<10;i++){
            if(i!=0){
                ant = ant*2;
            }
            System.out.printf("N[%d] = %d\n", i, ant);
        }
    }
}