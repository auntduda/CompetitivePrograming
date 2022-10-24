function split(inputstr, sep)
    if sep == nil then
            sep = "%s"
    end
    t={}
    for str in string.gmatch(inputstr, "([^"..sep.."]+)") do
            table.insert(t, str)
    end
    return t
end

while true do
    linha = io.read()
    if linha == nil then break end
    ls = split(linha)

    h = tonumber(ls[1])/30
    m = tonumber(ls[2])/6
    res = ""

    if(h<10) then
        res = res.."0"
    end
    res = res..h..":"
    if(m<10) then
        res = res.."0"
    end
    res = res..m
    
    print(res)
end