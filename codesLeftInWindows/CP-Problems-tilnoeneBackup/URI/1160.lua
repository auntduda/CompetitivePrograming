t = io.read("*number")
for i=1,t do
    pa = io.read("*number")
    pb = io.read("*number")
    g1 = io.read("*number")
    g2 = io.read("*number")
    anos=0
    while(true) do
        if(anos>100 or pa>pb) then
            break
        end
        pa=pa+math.floor(pa*g1/100)
        pb=pb+math.floor(pb*g2/100)
        anos=anos+1
    end
    if(anos>100) then
        print("Mais de 1 seculo.")
    else
        print(anos.." anos.")
    end
end