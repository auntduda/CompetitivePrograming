import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException{
        BufferedReader ler = new BufferedReader(new InputStreamReader(System.in));
        String linha;

        while ((linha = ler.readLine()) != null){
            String[] ls = linha.split(" ");
            int xf = Integer.parseInt(ls[0]), yf = Integer.parseInt(ls[1]), xi = Integer.parseInt(ls[2]), yi = Integer.parseInt(ls[3]), vi = Integer.parseInt(ls[4]), r1 = Integer.parseInt(ls[5]), r2 = Integer.parseInt(ls[6]);
            double x = (xf-xi)*(xf-xi), y=(yf-yi)*(yf-yi);
            if(Math.sqrt(x+y)+vi*1.5>r1+r2){
                System.out.printf("N\n");
            } else{
                System.out.printf("Y\n");
            }
        }
    }
}