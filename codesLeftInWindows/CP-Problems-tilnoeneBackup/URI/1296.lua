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
    c = tonumber(ls[3])
    
    raiz = 2*(a*a*b*b+b*b*c*c+c*c*a*a)-(a*a*a*a + b*b*b*b + c*c*c*c)
    
    if(raiz > 0) then print(string.format("%.3f", (1/3.0 * math.sqrt(raiz))))
    else print("-1.000") end

end