def min(a, b)
    if a < b then return a end
    return b
end

def dist(xa, ya, xb, yb)
    return (xa-xb)*(xa-xb) + (ya-yb)*(ya-yb)
end

    n = gets.to_i
    
    for i in 1..n do
        ans = 0
        
        l = gets.split(' ')
        
        w = l[0].to_i
        h = l[1].to_i
        px0 = l[2].to_i
        py0 = l[3].to_i
        
        px1 = px0
        py1 = py0 + h
        
        px2 = px0 + w
        py2 = py0
        
        px3 = px0 + w
        py3 = py0 + h
        
        l = gets.split(' ')
        
        nome = l[0]
        nivel = (l[1]).to_i
        cx = (l[2]).to_i
        cy = (l[3]).to_i
        
        if(nome == "fire") then
            dano = 200

            if(nivel == 1) then raio = 20
            elsif(nivel == 2) then raio = 30
            else raio = 50 end

        elsif(nome == "water") then
            dano = 300

            if(nivel == 1) then raio = 10
            elsif(nivel == 2) then raio = 25
            else raio = 40 end

        elsif(nome == "earth") then
            dano = 400

            if(nivel == 1) then raio = 25
            elsif(nivel == 2) then raio = 55
            else raio = 70 end

        else
            dano = 100

            if(nivel == 1) then raio = 18
            elsif(nivel == 2) then raio = 38
            else raio = 60 end
        end
            
        if(dist(px0, py0, cx, cy) <= raio * raio) then
            ans = dano end
        if(dist(px1, py1, cx, cy) <= raio * raio) then
            ans = dano end
        if(dist(px2, py2, cx, cy) <= raio * raio) then
            ans = dano end
        if(dist(px3, py3, cx, cy) <= raio * raio) then
            ans = dano end
        
        if(ans == 0) then
            if(cy < py3 and cy > py2) then
                if(min(dist(cx, cy, px2, cy), dist(cx, cy, px0, cy)) <= raio * raio) then
                    ans = dano
                end
            end

            if(cx > px1 and cx < px3) then
                if(min(dist(cx, cy, cx, py1), dist(cx, cy, cx, py0)) <= raio * raio) then
                    ans = dano
                end
            end

            if(cx >= px0 and cx <= px2 and cy >= py0 and cy <= py1) then
                ans = dano
            end
        end    
        puts(ans)
    end
