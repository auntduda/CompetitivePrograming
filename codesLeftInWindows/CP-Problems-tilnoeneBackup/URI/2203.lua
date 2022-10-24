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

    xf = tonumber(ls[1])
    yf = tonumber(ls[2])
    xi = tonumber(ls[3])
    yi = tonumber(ls[4])
    vi = tonumber(ls[5])
    r1 = tonumber(ls[6])
    r2 = tonumber(ls[7])
    x = (xf-xi)*(xf-xi)
    y = (yf-yi)*(yf-yi)
    if(math.sqrt(x+y)+vi*1.5>r1+r2) then
        print("N")
    else
        print("Y")
    end
end