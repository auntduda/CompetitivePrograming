import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException{
        BufferedReader ler = new BufferedReader(new InputStreamReader(System.in));
        String linha;

        while ((linha = ler.readLine()) != null){
            String[] ls = linha.split(" ");

            int a = Integer.parseInt(ls[0]), b = Integer.parseInt(ls[1]);
            
            if(b >= 0 && b <= 2) System.out.printf("nova\n");
            else if(b >= 97 && b <= 100) System.out.printf("cheia\n");
            else{
                if(a > b) System.out.printf("minguante\n");
                else System.out.printf("crescente\n");
            }
        }
    }
}