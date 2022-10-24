import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int n = ler.nextInt();
        if(n%2==0){
            n+=1;
        }
        
        for(int i=n;i<n+12;i+=2){
            System.out.println(i);
        }
    }
}