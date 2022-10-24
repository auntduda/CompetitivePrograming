while linha = gets
    ls = linha.split(' ')

    l = (ls[0]).to_i
    c = (ls[1]).to_i
    ra= (ls[2]).to_i
    rb = (ls[3]).to_i
        
    if(l == 0 and c == 0 and ra == 0 and rb == 0) then break end
            
    cxa = ra;
    cya = c-ra;
            
    cxb = l-rb;
    cyb = rb;

    if(ra*2 <= l and ra*2 <= c and rb*2 <= l and rb*2 <= c) then
        if((cxa - cxb) * (cxa - cxb) + (cya - cyb) * (cya - cyb)  >= (ra + rb) * (ra + rb)) then puts("S")
        else puts("N") end
    else puts("N") end
end