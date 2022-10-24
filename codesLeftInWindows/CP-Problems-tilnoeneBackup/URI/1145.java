import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int x = ler.nextInt(), y = ler.nextInt();
        String res = "";
        for(int i=1;i<=y;i++){
            res+=i;
            if(i%x==0 || i==y){
                System.out.println(res);
                res="";
            } else{
                res+=" ";
            }
        }
    
    }
}