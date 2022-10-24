import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int i;
        for(i=1;i<=9;i+=2){
    		System.out.printf("I=%d J=%d\n", i, i+6);
    		System.out.printf("I=%d J=%d\n", i, i+5);
    		System.out.printf("I=%d J=%d\n", i, i+4);
        }
       
    }
}