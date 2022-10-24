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

function dist(xa, ya, xb, yb)
    d = (math.sqrt((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb)))
    
    return d
end

function abs(a)
    if a < 0 then return a * (-1)
    else return a end
end

function min(a, b)
    if a < b then return a
    else return b end
end

while true do
    linha = io.read()
    if linha == nil then break end
    ls = split(linha)
    
    xi = tonumber(ls[1])
    yi = tonumber(ls[2])
    xf = tonumber(ls[3])
    yf = tonumber(ls[4])
    v = tonumber(ls[5])
    
    linha = io.read()
    ls = split(linha)
    v1x = tonumber(ls[1])
    v1y = tonumber(ls[2])
    v4x = tonumber(ls[3])
    v4y = tonumber(ls[4])
    
    v2x = v4x
    v2y = v1y
    
    v3x = v1x
    v3y = v4y
    
    d1 = dist(xi, yi, v1x, v1y) + dist(xf, yf, v2x, v2y)
    d2 = dist(xi, yi, v3x, v3y) + dist(xf, yf, v4x, v4y)
    
    print(string.format("%.1f", ((min(d1, d2) + abs(v1x-v2x)) / v)))
end