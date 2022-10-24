def dist(xa, ya, xb, yb)
    d = (Math.sqrt((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb)))
    
    return d
end

def abs(a)
    if a < 0 then return a * (-1)
    else return a end
end

def min(a, b)
    if a < b then return a
    else return b end
end

while linha = gets
    ls = linha.split(' ')
    xi = (ls[0]).to_i
    yi = (ls[1]).to_i
    xf = (ls[2]).to_i
    yf = (ls[3]).to_i
    v = (ls[4]).to_i
    
    ls = gets.split(' ')
    v1x = (ls[0]).to_i
    v1y = (ls[1]).to_i
    v4x = (ls[2]).to_i
    v4y = (ls[3]).to_i
    
    v2x = v4x
    v2y = v1y
    
    v3x = v1x
    v3y = v4y
    
    d1 = dist(xi, yi, v1x, v1y) + dist(xf, yf, v2x, v2y)
    d2 = dist(xi, yi, v3x, v3y) + dist(xf, yf, v4x, v4y)
    
    puts "%0.01f" % ((min(d1, d2) + abs(v1x-v2x)) / v)
end