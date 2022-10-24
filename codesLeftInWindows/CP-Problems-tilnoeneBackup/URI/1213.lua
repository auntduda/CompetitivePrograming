while true do
    linha = io.read()
    if linha == nil then break end
    n = tonumber(linha)

    op = 1
    num = 1
    while(num%n~=0)do
        num = (10*num+1)%n
        op=op+1
    end
    
    print(op)
end