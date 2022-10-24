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
    ls = split(linha)

    q = tonumber(ls[1])
    d = tonumber(ls[2])
    p = tonumber(ls[3])
    
    pg = (q*d*p)/(p-q);
    res = ""
    
    res = res .. math.floor(pg);
            
    if(math.floor(pg) == 1) then res = res .." pagina"
    else res  = res .. " paginas" end
    
    print(res)

end