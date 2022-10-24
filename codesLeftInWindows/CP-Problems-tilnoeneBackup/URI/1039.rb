while linha = gets
    ls = linha.split(' ')
        r1 = (ls[0]).to_i
        x1 = (ls[1]).to_i
        y1 = (ls[2]).to_i
        r2 = (ls[3]).to_i
        x2 = (ls[4]).to_i
        y2 = (ls[5]).to_i
        
        d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)
        
    if(d <= r1*r1 and Math.sqrt(d)+r2 <= r1) then puts("RICO")
    else puts("MORTO") end
end