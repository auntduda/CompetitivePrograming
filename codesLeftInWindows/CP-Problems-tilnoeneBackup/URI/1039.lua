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

    r1 = tonumber(ls[1])
    x1 = tonumber(ls[2])
    y1 = tonumber(ls[3])
    r2 = tonumber(ls[4])
    x2 = tonumber(ls[5])
    y2 = tonumber(ls[6])
    
    d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)
        
    if(d <= r1*r1 and math.sqrt(d)+r2 <= r1) then print("RICO")
    else print("MORTO") end

end