import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int n = ler.nextInt(), i, j, x, y, soma;
        for(i=0;i<n;i++){
            x = ler.nextInt();
            y = ler.nextInt();
            if(x%2==0){
                x++;
            }
            soma=0;
            for(j=0;j<y;j++){
                soma+=x;
                x+=2;
            }
            System.out.printf("%d\n", soma);
        }
    }
}