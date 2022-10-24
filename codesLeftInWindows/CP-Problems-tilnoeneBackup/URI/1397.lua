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
    if linha == nil or linha == "0" then break end
    n = tonumber(linha)
    
    a = 0
    b = 0
    for i=1, n do
        v = split(io.read())
        
        if tonumber(v[1]) > tonumber(v[2]) then
            a = a + 1
        elseif tonumber(v[1]) < tonumber(v[2]) then
            b = b + 1
        end
        
    end
    
    print(a .. " " .. b)
end