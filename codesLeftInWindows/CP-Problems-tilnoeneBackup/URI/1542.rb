while linha = gets
        
    ls = linha.split(' ')
    q = (ls[0]).to_i
    if q == 0 then break end
    
    d = (ls[1]).to_i
    p1 = (ls[2]).to_i
    
    pg = (q*d*p1)/(p1-q);
    res = ""
    
    res += pg.floor.to_s;
            
    if(pg.floor == 1) then res += " pagina"
    else res += " paginas" end
    
    puts(res)

end