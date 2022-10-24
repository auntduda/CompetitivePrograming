while true do
    linha = io.read()
    if linha == nil then break end
    
    n = tonumber(linha)
    maior = tonumber(io.read())

    for i=2, n do
        v = tonumber(io.read())
        if v<maior then maior=v end
    end
    
    print(string.format("%.2f", maior))
end