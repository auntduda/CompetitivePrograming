import java.util.Scanner;

public class Main {
    public static int jogo(String a, String b){
        if(a.equals(b)) return 2;
        if(a.equals("tesoura") && b.equals("papel")) return 1;
        if(a.equals("papel") && b.equals("pedra")) return 1;
        if(a.equals("pedra") && b.equals("lagarto")) return 1;
        if(a.equals("lagarto") && b.equals("Spock")) return 1;
        if(a.equals("Spock") && b.equals("tesoura")) return 1;
        if(a.equals("tesoura") && b.equals("lagarto")) return 1;
        if(a.equals("lagarto") && b.equals("papel")) return 1;
        if(a.equals("papel") && b.equals("Spock")) return 1;
        if(a.equals("Spock") && b.equals("pedra")) return 1;
        if(a.equals("pedra") && b.equals("tesoura")) return 1;
        return 0;
    }
    
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int n = ler.nextInt();
        String linha = ler.nextLine();
        for(int i=0;i<n;i++){
            linha = ler.nextLine();
            String escolhas[] = linha.split(" ");
            String s = escolhas[0], r = escolhas[1];

            System.out.printf("Caso #%d: ", i+1);
            int res = jogo(s, r);
            if(res==2){
                 System.out.printf("De novo!\n");
            } else if(res==1){
                 System.out.printf("Bazinga!\n");
            } else{
                 System.out.printf("Raj trapaceou!\n");
            }
        }
        
    }
}