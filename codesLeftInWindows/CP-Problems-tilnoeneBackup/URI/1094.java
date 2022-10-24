import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
    
        int n = ler.nextInt(), v, s=0, r=0, c=0, i;
        char animal;

        for(i=0;i<n;i++){
            v = ler.nextInt();
            animal = ler.next().charAt(0);
            if(animal=='C'){
                c+=v;
            } else if(animal=='R'){
                r+=v;
            } else{
                s+=v;
            }
        }
        double soma = c+r+s;
    
        System.out.printf("Total: %d cobaias\n", c+r+s);
        System.out.printf("Total de coelhos: %d\n", c);
        System.out.printf("Total de ratos: %d\n", r);
        System.out.printf("Total de sapos: %d\n", s);
        System.out.printf("Percentual de coelhos: %.2f %%\n", (100*c)/soma);
        System.out.printf("Percentual de ratos: %.2f %%\n", (100*r)/soma);
        System.out.printf("Percentual de sapos: %.2f %%\n", (100*s)/soma);
        
    }
}