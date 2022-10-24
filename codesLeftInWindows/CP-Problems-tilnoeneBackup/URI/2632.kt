import java.util.*
import java.lang.Math

fun min(a: Int, b: Int): Int{
    if(a < b) return a;
    return b;
}

fun dist(xa: Int, ya: Int, xb: Int, yb: Int): Int{
    return (xa-xb)*(xa-xb) + (ya-yb)*(ya-yb);
}

fun main(args: Array<String>) {
    val ler = Scanner(System.`in`)
    
    var n = ler.nextInt();
        
        for(i in 1..n){ 
            var ans = 0;
            var raio = 0;
            var dano = 0;
            
            var w = ler.nextInt();
            var h = ler.nextInt();
            var px0 = ler.nextInt();
            var py0 = ler.nextInt();
            
            var nome = ler.next();
            var nivel = ler.nextInt();
            var cx = ler.nextInt();
            var cy = ler.nextInt();
            
            var px1 = px0;
            var py1 = py0 + h;
                
            var px2 = px0 + w;
            var py2 = py0;
                
            var px3 = px0 + w;
            var py3 = py0 + h;
            
            if(nome == "fire"){
                dano = 200;
        
                if(nivel == 1){ 
                    raio = 20;
                } else if(nivel == 2){ 
                    raio = 30; 
                } else{ 
                    raio = 50; 
                }
        
            } else if(nome == "water"){
                dano = 300;
        
                if(nivel == 1){
                    raio = 10;
                } else if(nivel == 2){ 
                    raio = 25;
                } else{ 
                    raio = 40; 
                }
            } else if(nome == "earth"){
                dano = 400;
        
                if(nivel == 1){ 
                    raio = 25; 
                } else if(nivel == 2){ 
                    raio = 55;
                } else{ 
                    raio = 70; 
                }
            } else{
                dano = 100;
        
                if(nivel == 1){ 
                    raio = 18;
                } else if(nivel == 2){ 
                    raio = 38;
                } else{ 
                    raio = 60;
                }
            }
                
            if(dist(px0, py0, cx, cy) <= raio * raio){
                ans = dano;
            }
            if(dist(px1, py1, cx, cy) <= raio * raio){
                ans = dano;
            }
            if(dist(px2, py2, cx, cy) <= raio * raio){
                ans = dano;
            }
            if(dist(px3, py3, cx, cy) <= raio * raio){
                ans = dano;
            }
            
            if(ans == 0){
                if(cy < py3 && cy > py2){
                    if(min(dist(cx, cy, px2, cy), dist(cx, cy, px0, cy)) <= raio * raio){
                        ans = dano;
                    }
                }
                
                if(cx > px1 && cx < px3){
                    if(min(dist(cx, cy, cx, py1), dist(cx, cy, cx, py0)) <= raio * raio){
                        ans = dano;
                    }
                }
                
                if(cx >= px0 && cx <= px2 && cy >= py0 && cy <= py1){
                    ans = dano;
                }
            }
            
            
            println(ans);
        }
}