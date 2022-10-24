import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException{
        BufferedReader ler = new BufferedReader(new InputStreamReader(System.in));
        String pal;

        while ((pal = ler.readLine()) != null){
            if(pal.equals("esquerda")) System.out.printf("ingles\n");
            else if(pal.equals("direita")) System.out.printf("frances\n");
            else if(pal.equals("nenhuma")) System.out.printf("portugues\n");
            else System.out.printf("caiu\n");
        }
    }
}
