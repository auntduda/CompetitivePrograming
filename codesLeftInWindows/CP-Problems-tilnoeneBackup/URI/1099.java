import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int n = ler.nextInt(), x, y, si, temp, i, j;
        for(i=0;i<n;i++){
            x = ler.nextInt();
            y = ler.nextInt();
            si=0;
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
            for(j=x;j<y;j+=2){
                si+=j;
            }
            System.out.printf("%d\n", si);
        }
       
    }
}