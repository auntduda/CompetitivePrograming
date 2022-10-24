import java.io.*;

public class Main {
    static int min(int a, int b){
        if(a < b) return a;
        return b;
    }
    
    static int dist(int xa, int ya, int xb, int yb){
        return (xa-xb)*(xa-xb) + (ya-yb)*(ya-yb);
    }
    
    public static void main(String args[]) throws IOException{
        BufferedReader ler = new BufferedReader(new InputStreamReader(System.in));
        
        int i, n = Integer.parseInt(ler.readLine());
        int ans, w, h, px0, py0, px1, py1, px2, py2, px3, py3, cx, cy, nivel, dano, raio;
        
        for(i = 0; i < n; i++){
            ans = 0;
            
            String linha = ler.readLine();
            String[] l = linha.split(" ");
            
            w = Integer.parseInt(l[0]);
            h = Integer.parseInt(l[1]);
            px0 = Integer.parseInt(l[2]);
            py0 = Integer.parseInt(l[3]);
            
            px1 = px0;
            py1 = py0 + h;
            
            px2 = px0 + w;
            py2 = py0;
            
            px3 = px0 + w;
            py3 = py0 + h;
            
            linha = ler.readLine();
            l = linha.split(" ");
            
            String nome = l[0];
            nivel = Integer.parseInt(l[1]);
            cx = Integer.parseInt(l[2]);
            cy = Integer.parseInt(l[3]);
            
            if(nome.equals("fire")){
                dano = 200;
    
                if(nivel == 1) raio = 20;
                else if(nivel == 2) raio = 30;
                else raio = 50;
    
            } else if(nome.equals("water")){
                dano = 300;
    
                if(nivel == 1) raio = 10;
                else if(nivel == 2) raio = 25;
                else raio = 40;
            } else if(nome.equals("earth")){
                dano = 400;
    
                if(nivel == 1) raio = 25;
                else if(nivel == 2) raio = 55;
                else raio = 70;
            } else{
                dano = 100;
    
                if(nivel == 1) raio = 18;
                else if(nivel == 2) raio = 38;
                else raio = 60;
            }
            
            if(dist(px0, py0, cx, cy) <= raio * raio)
                ans = dano;
            if(dist(px1, py1, cx, cy) <= raio * raio)
                ans = dano;
            if(dist(px2, py2, cx, cy) <= raio * raio)
                ans = dano;
            if(dist(px3, py3, cx, cy) <= raio * raio)
                ans = dano;
            
            if(ans == 0){
                if(cy < py3 && cy > py2){
                    if(min(dist(cx, cy, px2, cy), dist(cx, cy, px0, cy)) <= raio * raio)
                        ans = dano;
                }
                
                if(cx > px1 && cx < px3){
                    if(min(dist(cx, cy, cx, py1), dist(cx, cy, cx, py0)) <= raio * raio)
                        ans = dano;
                }
                
                if(cx >= px0 && cx <= px2 && cy >= py0 && cy <= py1)
                    ans = dano;
            }
            
            System.out.println(ans);
        }
        
    }
}