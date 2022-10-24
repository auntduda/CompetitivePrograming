import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
    
        int n = ler.nextInt(), v, vin=0, vout=0;
    
        for(int i=0;i<n;i++){
            v = ler.nextInt();
            if(v>=10 && v<=20){
                vin++;
            } else{
                vout++;
            }
        }
        System.out.printf("%d in\n", vin);
        System.out.printf("%d out\n", vout);
    }
}