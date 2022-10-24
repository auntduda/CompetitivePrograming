import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);

        while(true){
            int n = ler.nextInt();
            if(n==0){
                break;
            }
            String res = "";
            for(int i=1;i<n;i++){
                res+=i+" ";
            }
            res+=n;
            System.out.printf("%s\n", res);
        }
        
    }
}