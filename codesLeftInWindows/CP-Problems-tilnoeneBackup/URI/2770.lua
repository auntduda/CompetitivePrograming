function split(inputstr, sep)
    if sep == nil then
            sep = "%s"
    end
    local t={}
    for str in string.gmatch(inputstr, "([^"..sep.."]+)") do
            table.insert(t, str)
    end
    return t
end

while true do
    linha = io.read()
    if linha == nil then break end
    ls = split(linha)

    x = tonumber(ls[1])
    y = tonumber(ls[2])
    m = tonumber(ls[3])

    for i=1,m do
        linha2 = io.read()
        ls2 = split(linha2)
        a = tonumber(ls2[1])
        b = tonumber(ls2[2])
        if((a<=x and b<=y) or (b<=x and a<=y)) then print("Sim")
        else print("Nao") end
    end
end
