import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException{
        BufferedReader ler = new BufferedReader(new InputStreamReader(System.in));
        String linha;

        while ((linha = ler.readLine()) != null){
            String[] ls = linha.split(" ");
            int a = Integer.parseInt(ls[0]), b = Integer.parseInt(ls[1]);
            
            if(a == b && b == 0) break;
            
            System.out.println(a+b);
            
        }
    }
}