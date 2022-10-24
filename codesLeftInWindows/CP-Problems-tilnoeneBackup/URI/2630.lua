n = io.read("*number")
for i=0,n-1 do
    e = io.read("*line")
    e = io.read("*line")
    r = io.read("*number")
    g = io.read("*number")
    b = io.read("*number")
    
    if(e=="min") then
       if(r<g) then
            if(r<b) then
                res = r
            else
                res = b
            end
        else
            if(g<b) then
                res = g
            else
                res = b
            end
        end
    elseif(e=="mean") then
        res = ((r+g+b)/3)
    elseif(e=="max") then
        if(r>g) then
            if(r>b) then
                res = r
            else
                res = b
            end
        else
            if(g>b) then
                res = g
            else
                res = b
            end
        end
    else
        res = ((0.3*r)+(0.59*g)+(0.11*b))
    end
    print(string.format("Caso #%d: %d", i+1, math.floor(res)))
end
