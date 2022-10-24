function split(inputstr, sep)
    if sep == nil then
            sep = "%s"
    end
    local t={}
    for str in string.gmatch(inputstr, "([^"..sep.."]+)") do
            table.insert(t, str)
    end
    return t
end

function min(a, b)
    if a < b then return a end
    return b
end

function dist(xa, ya, xb, yb)
    return (xa-xb)*(xa-xb) + (ya-yb)*(ya-yb)
end

    n = tonumber(io.read())
    
    for i=1,n do
        ans = 0
        
        k = io.read()
        l = split(k)
        
        w = tonumber(l[1])
        h = tonumber(l[2])
        px0 = tonumber(l[3])
        py0 = tonumber(l[4])
        
        px1 = px0
        py1 = py0 + h
        
        px2 = px0 + w
        py2 = py0
        
        px3 = px0 + w
        py3 = py0 + h
        
        k = io.read()
        l = split(k)
        
        nome = l[1]
        nivel = tonumber(l[2])
        cx = tonumber(l[3])
        cy = tonumber(l[4])
        
        if(nome == "fire") then
            dano = 200

            if(nivel == 1) then raio = 20
            elseif(nivel == 2) then raio = 30
            else raio = 50 end

        elseif(nome == "water") then
            dano = 300

            if(nivel == 1) then raio = 10
            elseif(nivel == 2) then raio = 25
            else raio = 40 end

        elseif(nome == "earth") then
            dano = 400

            if(nivel == 1) then raio = 25
            elseif(nivel == 2) then raio = 55
            else raio = 70 end

        else
            dano = 100

            if(nivel == 1) then raio = 18
            elseif(nivel == 2) then raio = 38
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
    
        print(ans)
    end