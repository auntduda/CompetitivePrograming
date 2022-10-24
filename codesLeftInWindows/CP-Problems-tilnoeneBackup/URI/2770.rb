while linha = gets
    ls = linha.split(' ')
    x = (ls[0]).to_i
    y = (ls[1]).to_i
    m = (ls[2]).to_i

    for i in 1..m do
        linha2 = gets
        ls2 = linha2.split(' ')
        a = (ls2[0]).to_i
        b = (ls2[1]).to_i
        if((a<=x and b<=y) or (b<=x and a<=y)) then puts("Sim")
        else puts("Nao") end
    end
end
