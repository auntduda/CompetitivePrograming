import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        double i, j;
    	int k=0;
        for(i=0;i<=2;i+=0.2){
    		if(k==0 || k==5 || k==10){
    			System.out.printf("I=%.0f J=%.0f\n", i, i+1);
    			System.out.printf("I=%.0f J=%.0f\n", i, i+2);
    			System.out.printf("I=%.0f J=%.0f\n", i, i+3);
    		} else{
    			System.out.printf("I=%.1f J=%.1f\n", i, i+1);
    			System.out.printf("I=%.1f J=%.1f\n", i, i+2);
    			System.out.printf("I=%.1f J=%.1f\n", i, i+3);
    		}
    		k++;
        }
       
    }
}