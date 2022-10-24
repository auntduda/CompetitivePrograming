def dist(xa, ya, xb, yb):
    return (xa-xb)*(xa-xb) + (ya-yb)*(ya-yb)

def main():
    n = int(input())
    
    for i in range(n):
        ans = 0
        
        l = [int(j) for j in input().split()]
        
        w = l[0]
        h = l[1]
        px0 = l[2]
        py0 = l[3]
        
        px1 = px0
        py1 = py0 + h
        
        px2 = px0 + w
        py2 = py0
        
        px3 = px0 + w
        py3 = py0 + h
        
        l = input().split()
        
        nome = l[0]
        nivel = int(l[1])
        cx = int(l[2])
        cy = int(l[3])
        
        if(nome == "fire"):
            dano = 200

            if(nivel == 1): raio = 20
            elif(nivel == 2): raio = 30
            else: raio = 50;

        elif(nome == "water"):
            dano = 300

            if(nivel == 1): raio = 10
            elif(nivel == 2): raio = 25
            else: raio = 40

        elif(nome == "earth"):
            dano = 400

            if(nivel == 1): raio = 25
            elif(nivel == 2): raio = 55
            else: raio = 70

        else:
            dano = 100

            if(nivel == 1): raio = 18
            elif(nivel == 2): raio = 38
            else: raio = 60
			
        if(dist(px0, py0, cx, cy) <= raio * raio):
            ans = dano
        if(dist(px1, py1, cx, cy) <= raio * raio):
            ans = dano
        if(dist(px2, py2, cx, cy) <= raio * raio):
            ans = dano
        if(dist(px3, py3, cx, cy) <= raio * raio):
            ans = dano
		
        if(ans == 0):
            if(cy < py3 and cy > py2):
                if(min(dist(cx, cy, px2, cy), dist(cx, cy, px0, cy)) <= raio * raio):
                    ans = dano
		    
            if(cx > px1 and cx < px3):
                if(min(dist(cx, cy, cx, py1), dist(cx, cy, cx, py0)) <= raio * raio):
                    ans = dano
            
            if(cx >= px0 and cx <= px2 and cy >= py0 and cy <= py1):
                ans = dano
                
        print(ans)
        
main()