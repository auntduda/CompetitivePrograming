while linha = gets
    ls = linha.split(' ')
        xf = (ls[0]).to_i
        yf = (ls[1]).to_i
        xi = (ls[2]).to_i
        yi = (ls[3]).to_i
        vi = (ls[4]).to_i
        r1 = (ls[5]).to_i
        r2 = (ls[6]).to_i
        x = (xf-xi)*(xf-xi)
        y = (yf-yi)*(yf-yi)
        if(Math.sqrt(x+y)+vi*1.5>r1+r2) then
            puts("N")
        else
            puts("Y")
        end
end