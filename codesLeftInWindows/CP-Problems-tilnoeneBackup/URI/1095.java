import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
    
        int i=1, j;
        for(j=60;j>=0;j-=5){
    		System.out.printf("I=%d J=%d\n", i, j);
            i+=3;
        }
       
    }
}