while linha = gets
    ls = linha.split(' ')
    h = (ls[0]).to_i/30
    m = (ls[1]).to_i/6
    res = ""

    if(h<10) then
        res = res+"0"
    end
    res = res+h.to_s+":"
    if(m<10) then
        res = res+"0"
    end
    res = res+m.to_s
    
    puts(res)
end