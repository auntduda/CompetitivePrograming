while linha = gets
        
    ls = linha.split(' ')
    
    a = (ls[0]).to_i
    b = (ls[1]).to_i
    
    if(b >= 0 and b <= 2) then puts("nova")
    elsif(b >= 97 and b <= 100) then puts("cheia")
    else
        if(a > b) then puts("minguante")
        else puts("crescente") end
    end

end