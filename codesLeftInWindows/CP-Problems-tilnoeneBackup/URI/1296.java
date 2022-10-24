import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException{
        BufferedReader ler = new BufferedReader(new InputStreamReader(System.in));
        String linha;

        while ((linha = ler.readLine()) != null){
            String[] ls = linha.split(" ");
            double a = Double.parseDouble(ls[0]), b = Double.parseDouble(ls[1]), c = Double.parseDouble(ls[2]);
            
            double raiz = 2*(a*a*b*b+b*b*c*c+c*c*a*a)-(a*a*a*a + b*b*b*b + c*c*c*c);
            
            if(raiz > 0) System.out.printf("%.3f%n", 1/3.0 * Math.sqrt(raiz));
            else System.out.printf("%.3f\n", -1.0);
        }
    }
}