import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException{
        BufferedReader ler = new BufferedReader(new InputStreamReader(System.in));
        String linha;

        while ((linha = ler.readLine()) != null){
            int n = Integer.parseInt(linha);
            System.out.printf("%.0f\n", Math.ceil(n/100.0));
        }
    }
}