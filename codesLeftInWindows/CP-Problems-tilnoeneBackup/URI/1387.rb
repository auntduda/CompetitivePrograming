while linha = gets
    ls = linha.split(' ')
        a = (ls[0]).to_i
        b = (ls[1]).to_i
        
        if a == b && a == 0 then break end
        
        puts a+b
end