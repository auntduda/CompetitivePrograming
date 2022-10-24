while linha = gets
    n = linha.to_i
    maior = gets.to_f
    
    for i in 2..n do
        v = gets.to_f
        if v<maior then maior=v end
    end
    
    puts "%0.02f" % (maior).round(2)
    
end