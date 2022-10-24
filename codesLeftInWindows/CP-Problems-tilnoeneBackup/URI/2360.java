import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        
        int r, g, b, n, i, res;
        n = ler.nextInt();
		String aleat = ler.nextLine();
        for(i=0;i<n;i++){
			String e = ler.nextLine();
            String nums = ler.nextLine();
            String[] ns = nums.split(" ");
            r = Integer.parseInt(ns[0]);
			g = Integer.parseInt(ns[1]);
			b = Integer.parseInt(ns[2]);

            if(e.equals("min")){
                if(r<g){
                    if(r<b){
                        res = r;
                    } else{
                        res = b;
                    }
                } else{
                    if(g<b){
                        res = g;
                    } else{
                        res = b;
                    }
                }
            } else if(e.equals("mean")){
                res = (int)((r+g+b)/3);
            } else if(e.equals("max")){
                if(r>g){
                    if(r>b){
                        res = r;
                    } else{
                        res = b;
                    }
                } else{
                    if(g>b){
                        res = g;
                    } else{
                        res = b;
                    }
                }
            } else{
                res = (int)((0.3*r)+(0.59*g)+(0.11*b));
            }
            System.out.printf("Caso #%d: %d\n", i+1, res);
        }
        
    }
}