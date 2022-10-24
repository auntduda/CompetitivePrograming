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

    l = tonumber(ls[1])
    c = tonumber(ls[2])
    ra = tonumber(ls[3])
    rb = tonumber(ls[4])

    if(l == 0 and c == 0 and ra == 0 and rb == 0) then break end
            
    cxa = ra;
    cya = c-ra;
            
    cxb = l-rb;
    cyb = rb;

    if(ra*2 <= l and ra*2 <= c and rb*2 <= l and rb*2 <= c) then
        if((cxa - cxb) * (cxa - cxb) + (cya - cyb) * (cya - cyb)  >= (ra + rb) * (ra + rb)) then print("S")
        else print("N") end
    else print("N") end
end