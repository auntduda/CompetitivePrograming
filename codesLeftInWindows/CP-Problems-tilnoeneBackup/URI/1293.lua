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

    xa = tonumber(ls[1])
    ya = tonumber(ls[2])
    xb = tonumber(ls[3])
    yb = tonumber(ls[4])
    cmd = tonumber(ls[5])
    enf = tonumber(ls[6])
    
    ab = math.sqrt((xa - xb)*(xa - xb) + (ya - yb)*(ya - yb))
        
    cmd = (cmd * 3.14159265358979323846264338327950288419716939937510) / 180
    enf = (enf * 3.14159265358979323846264338327950288419716939937510) / 180
    
    print(string.format("%.3f", (ab * (1/math.tan(cmd) + 1/math.tan(enf)))))
end