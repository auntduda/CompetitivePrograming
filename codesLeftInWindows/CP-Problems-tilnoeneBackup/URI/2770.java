import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException{
        BufferedReader ler = new BufferedReader(new InputStreamReader(System.in));
        String linha;
        int a, b, i;

        while ((linha = ler.readLine()) != null){
            String[] ls = linha.split(" ");
            int x = Integer.parseInt(ls[0]), y = Integer.parseInt(ls[1]), m = Integer.parseInt(ls[2]);
            for(i=0;i<m;i++){
                String l2 = ler.readLine();
                String[] ls2 = l2.split(" ");
                a = Integer.parseInt(ls2[0]);
                b = Integer.parseInt(ls2[1]);
                if((a<=x && b<=y) || (b<=x && a<=y)) System.out.printf("Sim\n");
                else System.out.printf("Nao\n");
            }
        }
    }
}