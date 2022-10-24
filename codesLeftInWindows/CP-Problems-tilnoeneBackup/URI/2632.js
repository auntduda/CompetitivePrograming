var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

function dist(xa, ya, xb, yb){
    return (xa-xb)*(xa-xb) + (ya-yb)*(ya-yb)
}

function min(a, b){
    if(a < b) return a
    return b
}

    n = parseInt(lines.shift())
    
    for(i=0;i<n;i++){
        ans = 0
        
        l = lines.shift().split(' ')
        
        w = parseInt(l[0])
        h = parseInt(l[1])
        px0 = parseInt(l[2])
        py0 = parseInt(l[3])
        
        px1 = px0
        py1 = py0 + h
        
        px2 = px0 + w
        py2 = py0
        
        px3 = px0 + w
        py3 = py0 + h
        
        l = lines.shift().split(' ')
        
        nome = l[0]
        nivel = parseInt(l[1])
        cx = parseInt(l[2])
        cy = parseInt(l[3])
        
        if(nome == "fire"){
            dano = 200

            if(nivel == 1) raio = 20
            else if(nivel == 2) raio = 30
            else raio = 50;

        } else if(nome == "water"){
            dano = 300

            if(nivel == 1) raio = 10
            else if(nivel == 2) raio = 25
            else raio = 40
        } else if(nome == "earth"){
            dano = 400

            if(nivel == 1) raio = 25
            else if(nivel == 2) raio = 55
            else raio = 70
        } else{
            dano = 100

            if(nivel == 1) raio = 18
            else if(nivel == 2) raio = 38
            else raio = 60
        }
        
        if(dist(px0, py0, cx, cy) <= raio * raio)
            ans = dano
        if(dist(px1, py1, cx, cy) <= raio * raio)
            ans = dano
        if(dist(px2, py2, cx, cy) <= raio * raio)
            ans = dano
        if(dist(px3, py3, cx, cy) <= raio * raio)
            ans = dano
        
        if(ans == 0){
            if(cy < py3 && cy > py2){
                if(min(dist(cx, cy, px2, cy), dist(cx, cy, px0, cy)) <= raio * raio)
                    ans = dano
            }
            
            if(cx > px1 && cx < px3){
                if(min(dist(cx, cy, cx, py1), dist(cx, cy, cx, py0)) <= raio * raio)
                    ans = dano
            }
            
            if(cx >= px0 && cx <= px2 && cy >= py0 && cy <= py1)
                ans = dano
        }
        
        console.log(ans)
    }
