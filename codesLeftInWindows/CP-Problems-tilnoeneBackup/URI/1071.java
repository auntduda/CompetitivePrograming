import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
    
        int x = ler.nextInt(), y = ler.nextInt(), i, temp;
        if(x>y){
            temp=x;
            x=y;
            y=temp;
        }
        if(x%2==0){
            x++;
        } else{
            x+=2;
        }
        int soma=0;
        for(i=x;i<y;i+=2){
            soma+=i;
        }
        System.out.printf("%d\n", soma);
    }
}