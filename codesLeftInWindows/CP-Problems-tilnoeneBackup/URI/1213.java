import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException{
        BufferedReader ler = new BufferedReader(new InputStreamReader(System.in));
        String linha;

        while ((linha = ler.readLine()) != null){
            int n = Integer.parseInt(linha), op=1, num=1;

            while(num%n!=0){
                num = (10*num+1)%n;
                op++;
            }
            
            System.out.printf("%d\n", op);
        }
    }
}