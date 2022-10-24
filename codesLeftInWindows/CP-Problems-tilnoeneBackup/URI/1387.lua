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

    a = tonumber(ls[1])
    b = tonumber(ls[2])
    
    if a == 0 and b == 0 then break end
    
    print(a+b)
end