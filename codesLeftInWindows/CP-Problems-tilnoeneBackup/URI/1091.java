import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);

        int n, x, y, cx, cy, i;
        while(true){
            n = ler.nextInt();
            if(n==0) break;
            cx = ler.nextInt();
            cy = ler.nextInt();
            for(i=0;i<n;i++){
                x = ler.nextInt();
                y = ler.nextInt();
                if(x==cx || y==cy) System.out.printf("divisa\n");
                else if(x>cx){
                    if(y>cy) System.out.printf("NE\n");
                    else System.out.printf("SE\n");
                } else{
                    if(y>cy) System.out.printf("NO\n");
                    else System.out.printf("SO\n");
                }
            }
        }
    }
}