import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException{
        BufferedReader ler = new BufferedReader(new InputStreamReader(System.in));
        String linha;
        
        while((linha = ler.readLine()) != null){
            String[] ls = linha.split(" ");
            int h = Integer.parseInt(ls[0])/30, m = Integer.parseInt(ls[1])/6;
            if(h<10){
                System.out.printf("0");
            }
            System.out.printf("%d:", h);
            if(m<10){
                System.out.printf("0");
            }
            System.out.printf("%d\n", m);
        }
    }
}