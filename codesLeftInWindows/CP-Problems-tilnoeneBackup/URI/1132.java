import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int x = ler.nextInt(), y = ler.nextInt();

		if(x>y){
			int temp=x;
			x=y;
			y=temp;
		}
		int soma=0;
		for(int i=x;i<=y;i++){
			if(i%13!=0){
				soma+=i;
			}
		}
		System.out.printf("%d\n", soma);
    }
}