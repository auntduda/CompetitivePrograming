import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int t, pa, pb, anos, i;
        double g1, g2;
        t = ler.nextInt();
        for(i=0;i<t;i++){
            pa = ler.nextInt();
            pb = ler.nextInt();
            g1 = ler.nextDouble();
            g2 = ler.nextDouble();
            anos=0;
            while(true){
                if(anos>100 || pa>pb){
                    break;
                }
                pa+=pa*g1/100;
                pb+=pb*g2/100;
                anos++;
            }
            if(anos>100){
                System.out.printf("Mais de 1 seculo.\n");
            } else{
                System.out.printf("%d anos.\n", anos);
            }
        }

    }
}