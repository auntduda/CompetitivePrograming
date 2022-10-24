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

    if(b >= 0 and b <= 2) then print("nova")
    elseif(b >= 97 and b <= 100) then print("cheia")
    else
        if(a > b) then print("minguante")
        else print("crescente") end
    end

end