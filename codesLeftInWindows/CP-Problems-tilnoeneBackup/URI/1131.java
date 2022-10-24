import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int gi, gg, escolha=1, jogos=0, vi=0, vg=0, emp=0;
        while(escolha==1){
            jogos++;
			gi = ler.nextInt();
            gg = ler.nextInt();
            if(gi>gg){
                vi++;
            } else if(gi<gg){
                vg++;
            } else{
                emp++;
            }
            System.out.printf("Novo grenal (1-sim 2-nao)\n");
            escolha = ler.nextInt();;
        }
        System.out.printf("%d grenais\n", jogos);
        System.out.printf("Inter:%d\n", vi);
        System.out.printf("Gremio:%d\n", vg);
        System.out.printf("Empates:%d\n", emp);
        if(vi>vg){
            System.out.printf("Inter venceu mais\n");
        } else if(vi<vg){
            System.out.printf("Gremio venceu mais\n");
        } else{
            System.out.printf("Nao houve vencedor\n");
        }
    
    }
}