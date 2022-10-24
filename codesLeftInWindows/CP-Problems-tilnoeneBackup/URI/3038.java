import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException{
        BufferedReader ler = new BufferedReader(new InputStreamReader(System.in));
        String linha;

        while ((linha = ler.readLine()) != null){
            
            char[] frase = new char[linha.length()]; 
            
            for (int i = 0; i < linha.length(); i++) { 
                frase[i] = linha.charAt(i); 
            }
            
            for(int i = 0; i < linha.length(); i++){
                if(frase[i] == '@') System.out.printf("a");
                else if(frase[i] == '&') System.out.printf("e");
                else if(frase[i] == '!') System.out.printf("i");
                else if(frase[i] == '*') System.out.printf("o");
                else if(frase[i] == '#') System.out.printf("u");
                else System.out.printf("%c", frase[i]);
            }
            System.out.printf("\n");
            
        }
    }
}