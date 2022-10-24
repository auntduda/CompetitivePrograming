while true do
    linha = io.read()
    if linha == nil then break end

    n = tonumber(linha)
    print(math.ceil(n/100.0))
end