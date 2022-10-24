while linha = gets
    ls = linha.split(' ')
        a = (ls[0]).to_f
        b = (ls[1]).to_f
        c = (ls[2]).to_f
        
        raiz = 2*(a*a*b*b+b*b*c*c+c*c*a*a)-(a*a*a*a + b*b*b*b + c*c*c*c)
        
        if(raiz > 0) then puts "%0.03f" % (1/3.0 * Math.sqrt(raiz))
        else puts("-1.000") end

end