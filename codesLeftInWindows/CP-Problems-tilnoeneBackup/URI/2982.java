import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int n = ler.nextInt();
        
        int soma = 0;
        String lixo = ler.nextLine();
        for(int i = 0; i < n; i++){
            String linha = ler.nextLine();
            String[] ls = linha.split(" ");
            
            String e = ls[0];
            int v = Integer.parseInt(ls[1]);
            
            if(e.equals("G")){
                soma-=v;
            } else{
                soma+=v;
            }   
            
        }
        
        if(soma>=0){
            System.out.printf("A greve vai parar.\n");
        } else{
            System.out.printf("NAO VAI TER CORTE, VAI TER LUTA!\n");
        }
    }
}
