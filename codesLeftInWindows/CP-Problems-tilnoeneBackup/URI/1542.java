import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException{
        BufferedReader ler = new BufferedReader(new InputStreamReader(System.in));
        String linha;

        while ((linha = ler.readLine()) != null){
            String[] ls = linha.split(" ");
            int q = Integer.parseInt(ls[0]);
            if(q == 0){
                continue;
            }
            
            int d = Integer.parseInt(ls[1]), p = Integer.parseInt(ls[2]);
            
            int pg = (q*d*p)/(p-q);
            System.out.printf("%d", pg);
            
            if(pg == 1) System.out.printf(" pagina\n");
            else System.out.printf(" paginas\n"); 
            
        }
    }
}